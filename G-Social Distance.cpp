#include<iostream>
using namespace std;
void solve(){
	long long n,m;
	cin>>n>>m;
	long long a[n];
	
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	m-=1;
	for(long long i=1;i<n;i++){
		m-=(a[i]+1);
	}
	if(m>=a[n-1]){
	   cout<<"YES"<<endl;
	}else{
	   cout<<"NO"<<endl;
	}
 
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	
	return 0;
}