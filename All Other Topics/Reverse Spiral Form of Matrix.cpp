
#include <bits/stdc++.h> 


using namespace std;
int main()
 {
	//code
	int t;
cin>>t;
while(t--)
{
int n,m;

cin>>m>>n;
int a[m][n];
for(int i=0;i<m;i++) { for(int j= 0;j<n;j++) {cin>>a[i][j];

}
}
int ans[n*m];
int j=0;
int i, k = 0, l = 0;
while (k < m && l < n) {

for (i = l; i < n; ++i) {
ans[j++]=a[k][i];

}
k++;

for (i = k; i < m; ++i) {
ans[j++]=a[i][n - 1];

}
n--;

if (k < m) {
for (i = n - 1; i >= l; --i) {
ans[j++]=a[m - 1][i];

}
m--;
}

if (l < n) {
for (i = m - 1; i >= k; --i) {
ans[j++]=a[i][l];

}
l++;
}
}
for(int i=j-1;i>=0;i--)
{
cout<<ans[i]<<" ";
    
}
cout<<endl;
    
}
	return 0;
}