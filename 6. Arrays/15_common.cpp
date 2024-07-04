#include <iostream>
using namespace std;

/* int common(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for(int j = 1; j < size; j++){
            if (arr[i]==arr[j]){
                return arr[j];
            }
        }
    }
} */

int common(int arr[], int size){
    for(int i=0; i < size; i++){
        for(int j=1; j < size; j++){
            if(arr[i] == arr[j]){
                return arr[i];
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter a num : ";
    cin >> n;

    int arr[100];
    cout << "Enter list : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The common is : " << common(arr,n);
}