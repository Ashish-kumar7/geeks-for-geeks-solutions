int maxPoints(int A[], int B[],int N) {
     map<double ,int>mp;
     int maxi=0;
     for(int i=0;i<N;i++){
         int x=A[i];
         int y=B[i];
         for(int j=0;j<N;j++){
            if(i!=j){
                 int x1=A[j];
                 int y1=B[j];
                 if(x1==x){
                     mp[INT_MAX]++;
                 }
                 else {
                     double dd= ( (y1-y) / ( (x1-x)*1.0) );
                     mp[dd]++;
                 }
             }
         }
         for(auto i : mp){
             if(i.second > maxi){
                 maxi=i.second;
             }
         }
         mp.clear();
     }
     return maxi+1;
}