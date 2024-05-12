#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number for Square print of '*' : ";
    cin >> n;
    int i=1;
    while(i <= n){ // we have to print * till n num so it it = in the i<=n suppose this will print the rows 
        int j = 1; // here we go with the column 
        while (j <= n){ // we are making j for column which will also be the same 
            cout << "* ";
            j = j + 1; // after every star print the while loop will check for the condition and here the value is added by 1 increment;
        }
        cout << endl;
        i = i + 1; // Here we have not used the ++ operator as it will go into the infinite loop
    }
    return 0;
}