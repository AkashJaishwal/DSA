#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter array size : "; cin >> n;

    int arr[100];
    cout << "Enter Element : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << "Array is : ";
    
}