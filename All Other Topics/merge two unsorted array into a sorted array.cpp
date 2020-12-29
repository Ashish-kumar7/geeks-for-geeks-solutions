class Solution{
	public:
	void sortedMerge(int a[], int b[], int res[],int n, int m)
	{
	   // Your code goes here
	   // Your code goes here
	   sort(a,a+n);
	   sort(b,b+m);
	   
	   vector<int>X;
	   
	   int i=0;
	   int j=0;
	   
	   while(i<n && j<m){
	       if(a[i]<=b[j]){
	           X.push_back(a[i]);
	           i++;
	       }
	       else if(a[i]>b[j]){
	           X.push_back(b[j]);
	           j++;
	       }
	   }
	   while(i<n){
	       X.push_back(a[i]);
	       i++;
	   }
	   while(j<m){
	       X.push_back(b[j]);
	       j++;
	   }
	   
	   for(int i=0;i<X.size();i++){
	       res[i]=X[i];
	   }
	}
};
	  