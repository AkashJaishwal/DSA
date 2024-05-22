#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n){
        int j = i;
        int k = 3;
        while (j <= n){
            while(k<n){
            cout << (n-k++) << " ";
            }
            j = j + 1;
        }
        cout << endl;
        i++;
    }
}