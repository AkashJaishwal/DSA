#include <iostream>
using namespace std;

/* int power (int a, int b){
    int ans = 1;
    for(int i = 1; i<= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int result = power(a, b);
    cout << result;
} */

int power()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    // int a, b;
    int result = power();
    cout << "Answer is : " << result << endl;
    result = power();
    cout << "Answer is : " << result << endl;
    result = power();
    cout << "Answer is : " << result << endl;
}