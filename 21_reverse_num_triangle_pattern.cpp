#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Eneter a Number: ";
    cin >> n;

    int i = 1; 
    
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << i- j+1 << " "; // i-row j-column
            j = j+1;
        }
        cout << endl;
        i = i+1; 
    }
}

/*
Input and output 
Eneter a Number: 4
1
2 1
3 2 1
4 3 2 1

*/