class Solution {
public:
    void nextPermutation(vector<int>& nums) {

         int n = nums.size();
        //finding the break point 
         int breakPoint = -1;
    
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                breakPoint=i;
                break;
            }
        }

        //if breakpoint doesn't exist return inc array
        if(breakPoint == -1){
            reverse(nums.begin(), nums.end());
        }

        else{
        //swap breakpoint with closest greater number
        for(int i=n-1; i>breakPoint; i--){
            if(nums[i]>nums[breakPoint]){
                swap(nums[i], nums[breakPoint]);
                break;
            }
        }

        //reverse array from breakPoint to end
        reverse(nums.begin()+breakPoint+1, nums.end());
        }
    }
};
