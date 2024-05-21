#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Num : ";
    cin>> n;

    int i = 1;
    int count = 1; 

    while(i<=n){
        int j = 1;
        while (j<=i){
            cout << i << " "; // we have to print the row number so << i
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

}

/*
Input and Output
Enter a Num : 5
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
*/