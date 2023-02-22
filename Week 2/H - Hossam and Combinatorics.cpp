#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve()
{
  int T;
  cin >> T;
  while(T--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& it : a) cin >> it;
    int mn = *min_element(a.begin(), a.end());
    int mx = *max_element(a.begin(), a.end());
    if(mn == mx) {
      cout << (ll)n * (n - 1) << '\n';
    } else {
      int x = count(a.begin(), a.end(), mn);
      int y = count(a.begin(), a.end(), mx);
      cout << (ll)2 * x * y << '\n';
    }
  }
}
 
int main() 
{
    solve();
    return 0;
}
 