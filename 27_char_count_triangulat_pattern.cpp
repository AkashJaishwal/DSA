#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a num : ";
    cin >> n;

    int i = 1;
    char ch = 'A';

    while (i <= n){
        int j = 1;
        while ( j <= i){
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

/*
Input and Output 

Enter a num : 5
A 
B C 
D E F 
G H I J
K L M N O

*/