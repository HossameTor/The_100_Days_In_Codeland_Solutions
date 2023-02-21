#include <iostream>
#include <algorithm>
 
using namespace std;
 
 
 

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>> a[i];
    }
 
    int X;
    cin>> X;
	// represents first pointer
	int i = 0;
 
	// represents second pointer
	int j = n - 1;
 
	while (i < j) {
 
		// If we find a pair
		if (a[i] + a[j] == X){
			cout << "YES";
            break;
        }
		// If sum of elements at current
		// pointers is less, we move towards
		// higher values by doing i++
		else if (a[i] + a[j] < X)
			{i++;}
 
		// If sum of elements at current
		// pointers is more, we move towards
		// lower values by doing j--
		else
			{j--;}
	}
    if(i>=j){
        cout<< "NO";
    }
}