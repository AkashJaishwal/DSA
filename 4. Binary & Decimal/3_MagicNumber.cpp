#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    int result = 0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10,i)) + ans;

        n = (n >> 1);
        i++;
        result = (bit * pow(5, i)) + result;
    }

    cout  << ans << endl;
    cout << "Magic No. is : " << result;
}