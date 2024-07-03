#include <iostream>
#include <vector>
using namespace std;
/*
void findDuplicate(int arr[], int n) {
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

vector findDuplicate(int arr[], int size)
{
    vector<int> duplicates;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                bool found = false;
                for (int k = 0; k < duplicates.size(); k++)
                {
                    if (duplicates[k] == nums[i])
                    {
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    duplicates.push_back(nums[i]);
                }
                break;
            }
        }
    }
    return duplicates;
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

    cout << "Duplicates : ";
    findDuplicate(arr, n);
    cout << endl;

    return 0;
}
