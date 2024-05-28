#include <iostream>
using namespace std;

int SetBit(int a, int b){
    int count1 = 1, count2 = 1;
    if (a&1 == 1){
        count1++;
        a = a >> 1;
    }
    if (b&1 == 1){
        count2++;
        b = b >> 1;
    }

    return count1 + count2;
}

int main()
{
    int a, b;
    cout << "Enter 'a' : "; cin >> a;
    cout << "Enter 'b' : "; cin >> b;
    cout << "Count is " << SetBit(a, b);
}