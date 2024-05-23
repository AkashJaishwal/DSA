#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Num for Sum : ";
    cin >> n;
 
    bool isPrime = 1;
    //rem = 0, Not a prime
    for (int i = 2; i<n; i++){
        if(n%i == 0){
            isPrime = 0;
            break; // here we are using the break statement so that if it check and finds it is not prime then it will not check for the remaining
        }
    }
    if (isPrime == 0){
        cout << n  << " is not a prime Numer";
    }
    else {
        cout << n << " is a prime number";
    }
}