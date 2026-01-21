class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int leftp=1;
        vector<int>ans(n,1);
        for(int i =0;i<n;i++){
            ans[i]=leftp;
            leftp *=nums[i];


        }
        int rightp=1;
        for(int i=n-1;i>=0;i--){
            ans[i]*=rightp;
            rightp*=nums[i];

        }
        return ans;

        
    }
};