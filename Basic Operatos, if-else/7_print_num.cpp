#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter the num to start : ";
    cin >> num1;

    cout << "Enter the num to start : ";
    cin >> num2;

    cout << "The required number is : " ;

    // for (int i=1; i<=num; i++)
    // {
    //     cout << i << " ";
    // }
    while (num1<=num2){
        // cout << num1++ << " "; Either using this statement or the below two statement
        cout << num1 << " ";
        num1 = num1 + 1;
    }
}