//Leet Code Problem 

#include <iostream>
using namespace std;


class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n != 0){
            if (n%2==1){
                count = count + 1;
            }
            n = n/2;
        }
        return count;
    }
};


int main()
{
    int n;
    cout << "Enter a num : ";
    cin >> n;
    Solution obj;
    int result= obj.hammingWeight(n);
    cout << "Hamming Weight of " << n << " is: " << result << endl;
    return 0;
}