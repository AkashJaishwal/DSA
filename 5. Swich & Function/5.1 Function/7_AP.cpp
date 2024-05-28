#include <iostream>
using namespace std;

int AP(int n){
    int ans  = 0;
    ans = (3 * n) + 7;
    return ans;
}

int main(){
    int n;
    cout << "Enter a num : ";
    cin >> n;
    int result = AP(n);
    cout << "The nth term is : " << result;

}