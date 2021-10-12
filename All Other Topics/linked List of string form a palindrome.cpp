bool compute(Node* root){
     string str="";
   
   while(root!=NULL){
       string dat=root->data;
       
       str+=dat;
       root=root->next;
   }
   for(int i=0;i<=str.length()/2;i++){
       if(str[i]!=str[str.length()-1-i]){
           return 0;
       }
   }
   return 1;
}