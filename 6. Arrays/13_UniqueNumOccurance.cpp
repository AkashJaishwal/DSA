#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr, int size) {
    // for
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
    cout << uniqueOccurrences(arr, n);
}