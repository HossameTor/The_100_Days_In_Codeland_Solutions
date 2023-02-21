#include<iostream>
using namespace std;
 
main(){
	int t; cin>>t;
	int a=0;
	while(t--){
		string s; cin>>s;
		if(s[1]=='-') a--;
		else a++;
	}
	
	cout<<a;
} 