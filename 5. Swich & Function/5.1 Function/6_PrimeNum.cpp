#include <iostream>
using namespace std;

// 1 -> Prime NO.
// 0 -> Not a Prime NO.
bool isPrime(int n)
{
    for (int i=2; i<n ; i++)
    {
        // divide hoga toh prime nahi hai so return 0
        if (n % i == 0)
        {
            return 0;
            break; // It is used to not to continue the loop once the value is not true
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "It is a Prime";
    }
    else
    {
        cout << "It is not prime";
    }
}