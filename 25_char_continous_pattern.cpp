#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a num : ";
    cin >> n;

    int i = 1;

    while (i <= n){
        int j = 1;
        while (j <= n){
            char ch  = 'A'+i+j-2;
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}


/*
Input and Output
Enter a num : 4


Explanation
        j-->1   j-->2   j-->3   j-->4
i-->1   A       B       C       D
i-->2   B       C       D       E
i-->3   C       D       E       F
i-->4   D       E       F       G


used formula
first lets check with
i + j -1
using this we will get the value but how to implement in the code 

i + j -1 = 1 --> 'A' //It gives A
so for the remaining we will add 'A-1' to both the side

so 

i + j -1 + A-1 = 1 + A-1

finally we get 

'A' + i + j -2 = 'A'
*/