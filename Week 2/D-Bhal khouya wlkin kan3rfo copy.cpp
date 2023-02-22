#include <bits/stdc++.h>
using namespace std;
 
void fx();
 
int main() {
    int t; for(cin >> t; t-- ; ) fx();
    return 0;
}
 
void fx(){ 
    int n, x; cin >> n >> x;
    int s1, s2, l;
    s1 = 0;
    int a[n]; for(int i=0;i<n;i++){ cin >> a[i]; s1+=a[i]; }
    s2 = s1; l = n;
    int j = 0;
    while(s1%x == 0 && s2%x == 0){
        s1 -= a[j];
        s2 -= a[n-1-j];
        l--;
        j++;
        if(j == n){
            cout << -1 << "\n";
            return;
        }
    }
    cout << l << "\n";
}