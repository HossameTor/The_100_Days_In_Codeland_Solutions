#include <iostream>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int sx,sy,sz;
    sx=0;sy=0;sz=0;
    int a[n][3];
    for (int i =0; i<n; i++){
        cin >> a[i][0] >> a[i][1] >> a[i][2];
        sx += a[i][0];
        sy+= a[i][1];
        sz+= a[i][2];
    }
    if(sx ==0 && sy == 0 && sz ==0){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}