#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int; 
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cpp_int dp[n+1];
	    dp[0]=dp[1]=1;
	    for(int i=2;i<=n;i++){
	        dp[i]=0;
	        for(int j=0;j<i;j++){
	            dp[i]+=(dp[j]*dp[i-j-1]);
	        }
	    }
	    cout<<dp[n]<<endl;
	}
	return 0;
}
