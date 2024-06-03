#include <iostream>
#include <limits.h>

using namespace std;

int getMax(int num[], int n)
{
    int maxi = INT_MIN; // This calls from from limits.h 
    
    for (int i=0; i<n; i++){
        maxi = max(num[i], maxi);
        // if(num[i] > max){
        //     max = num[i];
        // }
    }
    //return the maximum value
    return maxi;
}

int getMin(int num[], int n)
{
    int mini = INT_MAX; // This calls from from limits.h 
    for (int i=0; i<n; i++){
        mini = min (num[i], mini);
        // if(num[i] < min){
        //     min = num[i];
        // }
    }
    //return the minimum value
    return mini;
}

int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >>size;

    int num[100];

    cout << "Enter Num : ";
    for(int i=0; i<size; i++){
        cin >> num[i];
    }

    // calling the function
    cout << "Max in array is : " << getMax(num,size) << endl;
    cout << "Min in array is : " << getMin(num,size);

    return 0;

}