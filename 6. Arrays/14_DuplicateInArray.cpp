#include <iostream>
#include <vector>
using namespace std;

/* void findDuplicate(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate) continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
} */

int findDuplicate(int arr[], int size){
    
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }

    for(int i=1; i<size; i++){
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Duplicates : " << findDuplicate(arr, n);
    cout << endl;

    return 0;
}
