#include <iostream>
 
using namespace std;
 
int main()
{
    int x, y, i;
    cin >> x >> y;
    i = 1;
    while((x *= 3) <= (y *= 2)) i++;
    cout << i;
    return 0;
}