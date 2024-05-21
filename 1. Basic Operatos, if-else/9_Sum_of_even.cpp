#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number till you want the sum : ";
    cin >> num;

    int i=0, sum=0;
    while(i<=num){
        sum= sum+i;
        i=i+2;
    }
    cout <<"The sum of even number : " << sum;
}

/* 
Practice session
int main()

{
    int n;
    cin >> n;

    int i = 0;
    int sum = 0;

    while (i <= n){
        sum += i;
        i += 2;
    }

    cout << sum;

} */