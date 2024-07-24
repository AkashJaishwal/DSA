//This is updated

#include<iostream>
using namespace std;

int uniqueElement(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
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
    cout << uniqueElement(arr, n);
}
