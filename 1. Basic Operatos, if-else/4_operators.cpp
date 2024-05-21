#include <iostream>
using namespace std;

int main()
{
    int x = 2 / 5;
    cout << x << endl;

    float a = 2.0 / 5;
    cout << a << endl;

    double b = 1.0 / 5;
    cout << b << endl;

    cout << 2.0 / 4 << endl;

    cout << "\nDealing with symbol (<, >, =, !=)" << endl;

    int c = 2;
    int d = 3;

    bool first = (a == b);
    cout << first << endl;

    bool second = (a > b);
    cout << second << endl;

    bool third = (a < b);
    cout << third << endl;

    bool fourth = (a <= b);
    cout << fourth << endl;

    bool fifth = (a >= b);
    cout << fifth << endl;

    bool sixth = (a != b);
    cout << sixth << endl;


    cout << "\ndealing with (&&, || , !)" << endl <<endl;

    int x1 = 12;
    cout << !x1 << endl;

    int x2 = 0;
    cout << !x1 << endl;
}