#include <bits/stdc++.h>
using namespace std;
 
void fx();
 
int main() {
    int t; for(cin >> t; t-- ; ) fx();
    return 0;
}
 
void fx(){
    int n, ans=0; cin >> n;
    string s; cin >> s;
    map<char, int> mp;
    for(char c:s){
        if(mp[c]==0) ans+=2;
        else ans++;
        mp[c]++;
    }
    cout << ans << "\n";
}