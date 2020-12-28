void sortA1ByA2(int A1[], int N, int A2[], int M) {
    //Your code here
    
    map<int,int>mp;
    for(int i=0;i<N;i++){
        mp[A1[i]]++;
    }
    
    unordered_map<int,int>mp2;
   
    for(int j=0;j<M;j++){
        mp2[A2[j]]=j+1;
    }
    map<int,int>mp3;
    
    for(auto it=mp2.begin();it!=mp2.end();it++){
        mp3[it->second]=it->first;
    }
    
    vector<int>ans;
    
    for(auto it=mp3.begin();it!=mp3.end();it++){
        int val=it->second;
        int times=mp[val];
        
        for(int i=0;i<times;i++){
            ans.push_back(val);
        }
        mp[val]=-1;
    }
    
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second>=0){
            for(int k=0;k<it->second;k++){
                ans.push_back(it->first);
            }
        }
    }
    
    for(int i=0;i<N;i++){
        A1[i]=ans[i];
    }
} 