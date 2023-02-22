#include<bits/stdc++.h>
using namespace std;
int q[2000001], p[2000001];
int main(){
int n, i=0, j, a, b;
cin>>n;
for(int i=0; i<n; i++){
    cin>>a>>b;
    q[a]=b;
    p[a]++;
    p[b]--;
}
while(p[++i]!=1);
j=q[0];
while(j && i){
    cout<<i<<" "<<j<<" ";
    i=q[i];
    j=q[j];
}
if(i)
    cout<<i;
return 0;
}