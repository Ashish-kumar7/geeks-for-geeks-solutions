string solve(int arr[], int n) {
        // code here
        sort(arr,arr+n);
        int c=0;
        string ans="";
        for(int i=n-1;i>=0;i-=2){
            int f=arr[i],s=arr[i-1];
            int sum=f+s+c;
            if(f==0 && s==0) break;
            if(sum>9){
                c=1;
                sum=sum-10;
            }
            else c=0;
            ans+=to_string(sum);
        }
        if(c>0) ans+=to_string(c);
        //cout<<f<<" "<<s;
        reverse(ans.begin(),ans.end());
        return ans;
    }