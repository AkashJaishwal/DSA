#include<iostream>
using namespace std;

int main(){
    float temp;
    cout << "Enter the temp in Fahrenheit : ";
    cin >> temp;
    float celcious=(5.0/9)* (temp-32);
    cout << "The temp in Celcious is : " << celcious <<endl;
    cout << temp << " F = " << celcious << "C";
    
}