#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;  // https://www.geeksforgeeks.org/factorial-large-number-using-boost-multiprecision-library/
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cpp_int dp[n+1];
	    dp[0]=1;
	    for(int i=1;i<n+1;i++){
	        dp[i]=(((2*i)*(2*i-1)*dp[i-1])/(i*(i+1))); // Catlan Numbers are calculated using this formula.
	    }
	    cout<<dp[n]<<"\n";    
	}
	return 0;
}