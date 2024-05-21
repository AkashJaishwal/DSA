#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number till you want the sum : ";
    cin >> num;

    int i=1, sum=0;
    while(i<=num){
        sum= sum+i;
        i=i+1;
    }
    cout <<"The sum is : " << sum;
}