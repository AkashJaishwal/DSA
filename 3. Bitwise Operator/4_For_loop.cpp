#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Num for Sum : ";
    cin >> n;
    
    // int sum = 0;
    // for(int i=0; i<=n; i++)
    // {
    //     cout << i << " ";
    //     sum = sum + i;
    // }
    // cout << endl << sum;
    // return 0;

    int i = 0;
    for (;;){
        if (i <= n){
            cout << i << endl;
            i++;
        }
        else {
            break; 
        }
    }
}
