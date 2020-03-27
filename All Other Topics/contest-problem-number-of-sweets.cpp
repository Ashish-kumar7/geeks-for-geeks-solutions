
int convert(int m, int n,vector<int>&V){ 
    if (m == n) 
        return 0; 
    if (m > n){
        for(int i=0;i<m-n;i++){
            V.push_back(0);
        }
         return m - n; 
    }
    if (m <= 0 && n > 0) 
        return -1; 
    if (n % 2 == 1) {
        V.push_back(0);
        return 1 + convert(m, n + 1,V);
    }
    else{
        V.push_back(1);
        return 1 + convert(m, n / 2,V); 
    }
}
vector<string>getDecision(int a , int b){
    vector<int>V;
    convert(a,b,V);
    vector<string>A;
    for(int i=0;i<V.size();i++){
        if(V[i]==0){
            A.push_back("eat");
        }
        else {
            A.push_back("overflow");
        }
    }
    reverse (A.begin(),A.end());
    return A;
}
