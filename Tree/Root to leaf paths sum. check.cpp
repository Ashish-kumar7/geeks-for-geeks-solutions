
void inorder(Node *root,vector<int>&vec,int &sum,int &count){
     if(root==NULL){
         return ;
     }
        vec.push_back(root->data);
           int sum1=0;

     if(root->left==NULL && root->right==NULL){
         for(int y=0;y<vec.size();y++){
             sum1=sum1+vec[y];
         }
        if(sum1==sum){
            count++;
        }
     }
     inorder(root->left,vec,sum,count);
     inorder(root->right,vec,sum,count);
      //vector<int>::iterator it; 
    // it = vec.end(); 
     vec.erase(vec.end()-1 );
 }
bool hasPathSum(Node *root, int sum){
    if(root==NULL){
        return 0;
    }
    vector<int>vec;
    int count=0;
    inorder(root,vec,sum,count);
    if(count>0){
        return 1;
    }
        return 0;
    }