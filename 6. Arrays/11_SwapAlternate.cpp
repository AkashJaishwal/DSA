#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    int start = 0, next = 1;
    while(next<size){
        swap(arr[start], arr[next]);
        start = start + 2;
        next = next + 2;
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
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

    swapAlternate(arr, n);
    printArray(arr, n);
}