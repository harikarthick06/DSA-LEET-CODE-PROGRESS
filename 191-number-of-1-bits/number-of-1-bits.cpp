class Solution {
public:
    int hammingWeight(int n) {
        int ans=0;
        while(n!=0){
            ans=ans+1;
            n=n & (n-1);
        }
        return ans;

        
    }
};

/*#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n = 13;
    cout << bitset<8>(n); // prints 00001101
}
*/