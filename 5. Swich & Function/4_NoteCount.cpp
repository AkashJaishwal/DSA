#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Num : ";
    cin >> n;

    int count = 0;
    int num = 1;

    switch(num){
        case 1 : cout << n/100 << " 100 Notes" << endl;
            n = n%100;
        case 2 : cout << n/50 << " 50 Notes" << endl;
            n = n%50;
        case 3 : cout << n/20 << " 20 Notes" << endl;
            n = n%20;
        case 4 : cout << n/1 << " 1 Notes";
    }
}