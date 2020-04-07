void StayHomeTask(int arr[], int n, int k){
      vector< pair <int,int> > V; 
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        arr1[i]=arr[i];
        arr2[i]=arr[i]%k;
    }
    for (int i=0; i<n; i++){
        V.push_back( make_pair(arr2[i],arr1[i]) ); 
    }
    sort(V.begin(), V.end()); 
    for (int i=0; i<n; i++) { 
         cout<< V[i].second <<" "; 
    }
}