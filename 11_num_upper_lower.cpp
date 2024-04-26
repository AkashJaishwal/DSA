#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the Character : ";
    cin >> ch;
    if (ch>= 'A' && ch<='Z'){
        cout << ch << " is upper Case" << endl;
    }
    else if (ch>= 'a' && ch<='z'){
        cout << ch << " is lower Case" << endl;
    }
    else  if (ch>= '0' && ch<='9'){
        cout << ch << " is Number digit" << endl;

    }
}