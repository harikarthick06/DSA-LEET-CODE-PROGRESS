class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int x = 0;

        for (int i = 0; i <= n; i++) x ^= i;     // XOR of 0..n
        for (int v : nums) x ^= v;               // XOR with all numbers

        return x; // remaining value is the missing number
    }
};
