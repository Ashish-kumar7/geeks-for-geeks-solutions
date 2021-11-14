int Maximize(int a[],int n)
    {
        
        sort(a,a+n);
        long long ans=0;
        int mod=1e9+7;
        
        for(int i=0;i<n;i++){
            ans+=(a[i]*1ll*i)%mod;
        }
        
        return ans%mod;
        

    }