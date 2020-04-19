#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
    	int n;
    	cin>>n;
    	int arr[n];
    	
    	for(int i=0;i<n;i++)
            cin>>arr[i];
        
        long long a[n];
        long long b[n];
        
        for (int i=0; i<n; i++) {
            a[i] = arr[i];
            b[i] = arr[i];
        }
        
        for(int i=1;i<n;i++) {
            if (arr[i] > arr[i-1]) {
                a[i] += a[i-1];
            }
        }
        
        for (int i=n-2; i>=0; i--) {
            if (arr[i] > arr[i+1]) {
                b[i] += b[i+1];
            }
        }
        
        long long sum=0;
        
        for(int i=0;i<n;i++)
            if(a[i]+b[i]-arr[i] > sum)
                sum=a[i]+b[i]-arr[i];
                
        cout<<sum<<endl;
	}
	return 0;
}#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
    	int n;
    	cin>>n;
    	int arr[n];
    	
    	for(int i=0;i<n;i++)
            cin>>arr[i];
        
        long long a[n];
        long long b[n];
        
        for (int i=0; i<n; i++) {
            a[i] = arr[i];
            b[i] = arr[i];
        }
        
        for(int i=1;i<n;i++) {
            if (arr[i] > arr[i-1]) {
                a[i] += a[i-1];
            }
        }
        
        for (int i=n-2; i>=0; i--) {
            if (arr[i] > arr[i+1]) {
                b[i] += b[i+1];
            }
        }
        
        long long sum=0;
        
        for(int i=0;i<n;i++)
            if(a[i]+b[i]-arr[i] > sum)
                sum=a[i]+b[i]-arr[i];
                
        cout<<sum<<endl;
	}
	return 0;
}