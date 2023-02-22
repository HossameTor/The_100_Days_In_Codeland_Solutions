#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
 
void solve(){
	int n;string str;
	cin>>n>>str;
	int cnt=0;
	for(int i=0;i<n/2;i++){
		int x=str[i]-'0';
		int y=str[n-i-1]-'0';
		if(x^y)cnt+=2;
		else break;
	}
	cout<<n-cnt<<endl;
}
int main(){
	int T;cin>>T;
	while(T--){
		solve();
	}
	return 0;
}