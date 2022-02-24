long long maxProduct(vector<int> a, int n) {
	    // code here
	     long long mx = 1, mn = 1, ans = INT_MIN, t;
	     
	     
    for (int i = 0; i < n; i++) {
        
        t = mx;
        
        mx = max({{1ll*a[i]}, mn*a[i], mx*a[i]});
        mn = min({{1ll*a[i]}, mn*a[i], t*a[i]});
        
        ans = max(ans, mx);
    }
    return ans;
	}