void printDuplicates(int A[], int n) {
    
    int B[n];
    for(int i=0;i<n;i++){
        B[i]=0;
    }
    for(int i=0;i<n;i++){
        B[A[i]]++;
    }
    vector<int>C;
    int ans=0;
    for(int i=0;i<n;i++){
        if(B[i]>=2){
            C.push_back(i);
        }
    }
    if(C.size()==0){
        cout<<-1;
    }
    for(int i=0;i<C.size();i++){
        cout<<C[i]<<" ";
    }
}