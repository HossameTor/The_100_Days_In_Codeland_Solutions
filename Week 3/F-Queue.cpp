#include <bits/stdc++.h>
using namespace std;
int n,ar[100005],dp[100005];
int main() {
	int i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>ar[i];
		dp[i]=ar[i];
	}
	for(i=n-2;i>=0;i--)
		dp[i]=min(dp[i],dp[i+1]);
	for(i=0;i<n;i++)
		cout<<lower_bound(dp+i+1,dp+n,ar[i])-dp-i-2<<" ";
	return 0;
}