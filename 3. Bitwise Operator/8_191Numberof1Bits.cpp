//Leet Code Problem 
/* 
191. Number of 1 Bits
Easy

Write a function that takes the binary representation of a positive integer and returns the number of set bits it has (also known as the Hamming weight).
 

Example 1:

Input: n = 11

Output: 3

Explanation:

The input binary string 1011 has a total of three set bits.

Example 2:

Input: n = 128

Output: 1

Explanation:

The input binary string 10000000 has a total of one set bit.

Example 3:

Input: n = 2147483645

Output: 30

Explanation:

The input binary string 1111111111111111111111111111101 has a total of thirty set bits.


Constraints:

1 <= n <= 231 - 1
 */

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

