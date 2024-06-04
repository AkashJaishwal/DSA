#include <iostream>
using namespace std;

int arrayElementSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;

    cout << "Enter array Element : ";
    int arr[n];

    cout << "The sum of array is : " << 
    arrayElementSum(arr, n);
}