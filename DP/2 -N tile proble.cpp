#include <map>
#include <iostream>
using namespace std;

#define long long long
const long M = 1000000007; // modulo
map<long, long> F;

long f(long n) {
	if (F.count(n)) return F[n];
	long k=n/2;
	if (n%2==0) { // n=2*k
		return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M;
	} else { // n=2*k+1
		return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M;
	}
}

main(){
	long n,t;
	cin>>t;
	F[0]=F[1]=1;
	F[2] = 2;
	while (t)
	{
	 cin>>n;
	cout << (n==0 ? 0 : f(n)) << endl;
	t--;
	}
}
