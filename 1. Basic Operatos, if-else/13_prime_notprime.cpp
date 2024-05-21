#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number to check prime ot not : ";
    cin >> num;

    int i=2;
    while (i < num){
        if (num % i==0){
            cout << "Not Prime for " << i <<endl;
            // return 0;
        }else {
            cout << "Prime for "<< i <<endl;
        }
        i = i + 1;
    }
    // return 0;
}