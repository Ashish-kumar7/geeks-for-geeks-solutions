  private:
    void storeInOrder(Node *root, int depth, vector<int> &inOrder,
                  vector<int> &level) {
        if (!root) return;
        storeInOrder(root->left, depth + 1, inOrder, level);
        inOrder.push_back(root->data);
        level.push_back(depth);
        storeInOrder(root->right, depth + 1, inOrder, level);
    }
    
    public:
    pair<int, int> shortestRange(Node *root) {
        vector<int> inOrder, level;
        storeInOrder(root, 0, inOrder, level);
        int i = 0, j = 0, k = 0, cntZero = 0,
            maxDepth = *max_element(level.begin(), level.end()) + 1;
        vector<int> depth(maxDepth, 0);
        for (k = 0; k < level.size(); k++) {
            depth[level[k]]++;
            if (level[k] == 0) {
                j = k;
                break;
            }
        }
        for (int u : depth) {
            if (u == 0) {
                cntZero++;
            }
        }
        int x = *inOrder.begin(), y = inOrder.back();
        if (cntZero == 0) {
            x = inOrder[i], y = inOrder[j];
        }
        while (i <= k && j < inOrder.size()) {
            while (j < inOrder.size()) {
                if (cntZero == 0) {
                    if ((y - x) > (inOrder[j] - inOrder[i])) {
                        x = inOrder[i];
                        y = inOrder[j];
                    }
                    break;
                }
                j++;
                if (j >= inOrder.size()) {
                    break;
                }
                if (depth[level[j]] == 0) {
                    cntZero--;
                }
                depth[level[j]]++;
            }
            while (!cntZero && i <= k) {
                if ((y - x) > (inOrder[j] - inOrder[i])) {
                    x = inOrder[i];
                    y = inOrder[j];
                }
                depth[level[i]]--;
                if (depth[level[i]] == 0) {
                    cntZero++;
                }
     
                i++;
            }
        }
     
        return {x, y};
    }