#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a Num: ";
    cin >> n;
    int i = 1; // rows

    while(i <= n){
        int j = 1;
        while (j<=i){ // we have to print as per the rows number
            cout << "* ";
            j = j + 1;
        }
        cout << endl;
        i = i+1;

    }
}

// int main(){
//     int n;
//     cin >> n;
//     int row = 1;
    
//     while(row <=n){
//         int column = 1;
//         while(column <= row){
//             cout << "* ";
//             column = column + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

/* Explanation 
like 
1--> * 
2--> * * 
3--> * * * 
4--> * * * * 
5--> * * * * *

*/

