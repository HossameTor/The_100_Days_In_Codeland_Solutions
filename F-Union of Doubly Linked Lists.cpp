#include <iostream>
using namespace std;
 
int main() {
    int n;cin>>n;
	int l[n],r[n];
	for(int i=1;i<=n;i++)cin>>l[i]>>r[i];
	int x=0;
	for(int i=1;i<=n;i++){
		if(l[i]==0){
			if(x!=0){
				l[i]=x;
				r[x]=i;
			}
			x=i;
			while(r[x]!=0)x=r[x];
		}
	}
	for(int i=1;i<=n;i++)
	 	cout<<l[i]<<" "<<r[i]<<endl;
}