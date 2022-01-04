// Minimum Size Subarray Sum
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0, i = 0 , j = 0;
        int n = nums.size();
        int res = n + 1;
        while(j < n)
        {
            sum = sum + nums[j];
            if(sum < target)
                j++;
            else
            {
                while(sum >= target && i < n)
                {
                 res = min(res,j - i + 1);
                 sum = sum - nums[i];
                 i++; 
                }
                j++;
            }
        }
        if(res == n + 1)
            return 0;
        return res;
    }
};