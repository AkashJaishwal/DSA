#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Num for Sum : ";
    cin >> n;

    int a = 0;
    int b = 1;
    
    cout << a << " " << b << " ";
    for(int i=1; i<=n-2; i++){ // n-2 cause we are printing a & b above outside the loop which is 2 digit
        int nextNum = a + b;
        cout << nextNum << " ";

        a = b;
        b = nextNum;
    }
}
/* 
Enter a Num for Sum : 10
0 1 1 2 3 5 8 13 21 34 
 */