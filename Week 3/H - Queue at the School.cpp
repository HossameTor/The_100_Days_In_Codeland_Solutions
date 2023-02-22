#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(){
    int n,t;cin>>n>>t;
    char s[100];cin>>s;
    char temp;
    char s1[100];
    strcpy(s1,s);
    while(t--){
        for(int i=0;i<n-1;i++){
        if (s[i]=='B' && s[i+1]=='G'){
            temp=s1[i];
            s1[i]=s1[i+1];
            s1[i+1]=temp;
            }
        }
        strcpy(s,s1);
    }
    cout<<s;
}