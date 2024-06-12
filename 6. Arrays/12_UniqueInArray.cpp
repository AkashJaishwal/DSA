#include<iostream>
using namespace std;

void uniqueElement(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            if(arr[i] != arr[j]){
                cout << arr[i] << " ";
            }
        }
    }
}

int main(){
    int n;
    cout << "Enter array size : ";
    cin >> n;

    cout << "Enter elements : " << endl;
    int arr[100];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Unique Elements are : " << endl;
    uniqueElement(arr, n);
}