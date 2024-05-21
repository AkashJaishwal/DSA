#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a num : ";
    cin >> n;
    if(n==0){
        cout << "Zero" << endl;
    }
    else if(n>0){
        cout << "Positive" << endl;
    }
    else{
        cout << "Negative" << endl;
    }
}