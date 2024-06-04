#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    // wheather 1 is present in arr or not

    int key;
    cout << "Enter Key to find : ";
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is absent" << endl;
    }

    return 0;
}