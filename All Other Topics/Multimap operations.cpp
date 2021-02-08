multimap<int,int> multimapInsert(int arr[],int n){
    multimap<int,int>mp;
    for(int i=0;i<n;i++){
        mp.insert({arr[i],i});
    }
    return mp;
}
void multimapDisplay(multimap<int,int>mp){
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}
void multimapErase(multimap<int,int>&mp,int x){
    if(mp.find(x)!=mp.end()){
        cout<<"erased "<<x;
        while(mp.find(x)!=mp.end()){
             auto it=mp.find(x);  
            mp.erase (it);   
        }
    }
    else {
        cout<<"not found";
    }
    cout<<endl;
}