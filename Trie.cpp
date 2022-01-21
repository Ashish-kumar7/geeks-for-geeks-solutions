void insert(struct TrieNode *root, string key)
{
    // code here
    if(root == NULL) return;
    TrieNode *temp = root;
    for(int i = 0; i < key.length(); i++)
    {
        char c = key[i];
        if(temp -> children[c - 'a'] == NULL)
        {
            temp -> children[c - 'a'] = new TrieNode();
        }
        temp = temp -> children[c - 'a'];
    }
    temp -> isLeaf = true;
}

//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key) 
{
    // code here
    TrieNode *temp = root;
    for(int i = 0; i < key.length(); i++)
    {
        char c = key[i];
        if(temp -> children[c - 'a'] == NULL) return false;
        temp = temp -> children[c - 'a'];
    }
    if(temp -> isLeaf) return true;
    return false;
}