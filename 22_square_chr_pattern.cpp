#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< " enter a num :";
    cin >> n;
    
    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A'+ i-1; //type casting is used as if we directly print the value then it will give numerical values 
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i+1;
    }
}
