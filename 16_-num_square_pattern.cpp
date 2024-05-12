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
        cout << "\n";
        i = i+1;
    }
}

