#include <iostream>
using namespace std;

void sum(int num1, int num2);
void sub(int num1, int num2);
void mul(int num1, int num2);
void divi(int num1, int num2);


int main(){
    int num1, num2;
    cout << "Enter num1 : "; cin >> num1;
    cout << "Enter num2 : "; cin >> num2;

    sum(num1, num2);
    sub(num1, num2);
    mul(num1, num2);
    divi(num1, num2);
}

void sum(int num1, int num2){
    int sum = num1 + num2;
    cout << "The sum is " << sum << endl;
}

void sub(int num1, int num2){
    int sub= num1 - num2;
    cout << "The sub is " << sub << endl;
}

void mul(int num1, int num2){
    int mul = num1 * num2;
    cout << "The mul is " << mul << endl;
}

void divi(int num1, int num2){
    if (num1 > num2){
        int div = num1 / num2;
        cout << "The div is " << div;
    }
    else {
        cout << "Enter num"
    }

}

