#include <iostream>
using namespace std;

int main()
{
    cout <<"Increment And Decremet\n";

/*     cout << (17>>2) << endl;
    cout << (17>>1) << endl;
    cout << (19<<1) << endl;
    cout << (21<<2) << endl;
    cout << (5>>1); */

    int i = 2;
    int j = 3;

    cout << i++ << endl;// 2
    cout << ++i << endl; // 4
    cout << i++ << endl;  // 4
    cout << ++i << endl; // 6

    cout << j-- << endl;// 3
    cout << --j << endl; // 1
    cout << j-- << endl;  // 1
    cout << --j; // -1

}