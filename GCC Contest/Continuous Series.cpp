
int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    for(int i = 0; i<n; i++){
	        cin >> a[i];
	    }
	    int ans = 0;
	    int count = 0;
	    for(int i = 0; i<n-1; i++){
	        if(a[i] == a[i+1]-1){
	            count++;
	        }
	        else{
	            if(count>0){
	                ans++;
	            }
	            count = 0;
	        }
	    }
	    if(count > 0){
	        ans++;
	    }
	    cout << ans << endl;
	}
	return 0;
}