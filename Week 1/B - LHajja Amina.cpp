#include <iostream>
 
using namespace std;
 
int main()
{
    int K;
    string S;
    cin >> K;
    cin >> S;
    cout << S.substr(0, K);
    if(S.length() > K)
        cout << "...";
    return 0;
}