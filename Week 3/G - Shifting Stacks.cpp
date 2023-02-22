#include<bits/stdc++.h>
#define ll  long long
#define all(v) v.begin(),v.end() 
#define pb push_back
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i]
#define mod 1000000007
#include <vector>
#include<cmath>
#include <string>
using namespace std;
void solve(){
    ll int n;cin>>n;
    ll int arr[n];read(arr,n);
    ll int sum=0;
    int flag=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<i*(i+1)/2)flag=1;
    }
    if(flag==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main() {
    int t=1;cin>>t;
    while(t--){
        solve();
    }
}