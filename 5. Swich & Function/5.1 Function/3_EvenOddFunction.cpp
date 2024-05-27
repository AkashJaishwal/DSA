#include <iostream>
using namespace std;

/* void OddEven(int n){
    if (n%2 == 0){
        cout << "It is even Num.";
    }
    else if (n == 0){
        cout << "It is Zero which is even.";
    }
    else {
        cout << "It is Odd";
    }
} 

int main()
{
    int n;
    cin >> n;
    OddEven(n);
}

*/

bool isEven(int n){
    if(n & 1){
        return 0;
    }
    return 1;
}


int main()
{
    int n;
    cin >> n;
    if (isEven(n)){
        cout << "It is even";
    }
    else{
        cout << "It is odd";
    }
}