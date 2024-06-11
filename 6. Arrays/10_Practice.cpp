/*

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter array Size : ";
    cin >> n;

    cout << "Enter element : " << endl;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr, n);

    cout << "Reverse array is : \n";
    printArray(arr, n);

    return 0;
}

*/

#include <iostream>
using namespace std;

// Making the swapping function
void swapping(int &a, int &b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}

// reverse the array
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swapping(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter a size of array : ";
    cin >> n;

    cout << "Enter elements of array : ";
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr, n);
    cout << "Reverse array is : \n";

    printArray(arr, n);
}