#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
  long long n;
  cin>>n;
  long long a[n];
  for(long long i=0;i<n;i++) {
   cin>>a[i];
  }
  
 sort(a,a+n);
 long long somme = 0;
 int count=1;
 somme=a[0];
 for(long long i=1;i<n;i++){
    if(a[i]>=somme){
       count++;
       somme+=a[i];
    }
    
 }
 
cout<<count<<endl;
  return 0;
}
 