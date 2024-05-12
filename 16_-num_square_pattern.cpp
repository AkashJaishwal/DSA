#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Num for reverse pattern : ";
    cin >> n;

    int i = 1;

    while(i<=n){
        int j = n;
        while(j >= 1 ){
            cout << j << " ";
            j = j - 1; 
        }

        /*
        //Another approach
        
        int j = 1;
        while(j<=n){
            cout << n - j+1 << " ";
            j = j+1;
        }
        */

        cout << "\n";
        i = i+1;
    }
}