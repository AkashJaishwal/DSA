#include <iostream>
using namespace std;

/* 
int main()
{
    int n;
    cout << "Enter a num for table ";
    cin >> n;
    for(int i=n; i<=n; i++){
        cout << "Hey";
        cout << "Bye" << endl;
        continue;
        cout << "This will not print cause of the continue statement";
        
        
        for(int j=1; j<=10; j++)
        {
            cout << i << " x " << j << " = " << i*j << endl;
        }

        //first outerloop will start with i=0
        // then inner loop will run
        // when exit then again the outer loop run and update i++ which will be i = 1
        // and it goes on
    }
} */


int main()
{
    for(int i=0; i<=5; i++){
        for(int j=i; j<=5; j++)
        {
            if(i+j == 10){
                break;
            }
            cout << i << " " << j << endl;
        }

    }
}