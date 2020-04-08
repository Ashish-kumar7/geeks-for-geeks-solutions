void sortByFreq(int arr[],int n){
    unordered_map<int,int>mp;
    for( int i = 0; i < n; i++ ){
        mp[arr[i]]++;
    }
    vector<pair<int,int> > v;
    for( int i = 0; i < n; i++ ){
        v.push_back({mp[arr[i]],arr[i]});
    }
    for( int i = 0; i < n; i++ ){
        for( int j = i+1; j < n; j++ ){
            if( v[i].first < v[j].first ){
                swap(v[i],v[j]);
            }
            else if( (v[i].first == v[j].first)&&(v[i].second>v[j].second)){
                swap(v[i],v[j]);
            }
        }
    }
    for( int i = 0; i < n; i++ )
        cout << v[i].second << " ";
}
