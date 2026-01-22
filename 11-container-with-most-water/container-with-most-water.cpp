class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left =0;
        int right=n-1;
        int maxi=INT_MIN;
        int area =0;
        while(left<right){
            int w=right-left;
            int h=min(height[left],height[right]);
            area=h * w;
            if(height[left]<=height[right]){
                left++;
            }
            else{
                right--;
            }
            maxi=max(maxi,area);


        }
        return maxi;
        
    }
};