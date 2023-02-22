#include<bits/stdc++.h>
#define ll  long long
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>T(n);
        int arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];
                T[i]=arr[i];
        }
        sort(T.begin(),T.end());
 
        for(int i=0;i<n;i++){
            if(arr[i]==T[n-1])cout<<arr[i]-T[n-2]<<" ";
            else cout<<arr[i]-T[n-1]<<" ";
        }
        cout<<endl;
    }
    return 0;
}