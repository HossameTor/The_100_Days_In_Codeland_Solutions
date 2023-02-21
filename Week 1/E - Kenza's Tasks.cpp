#include<bits/stdc++.h>
using namespace std;

main(){
	string a; cin>>a;
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	
	for(int i=0;i<a.length();i++){
		if(a[i]=='a' || a[i]=='o' || a[i]=='y' || a[i]=='e' || a[i]=='u' || a[i]=='i') continue;
		cout<<'.'<<a[i];
	}
} 