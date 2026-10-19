class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int minlen=INT_MAX;
        int sum =0;

        for(int right=0;right<nums.size();right++)
        {
            sum = sum+nums[right];

            while(sum>=target)
            {
                int len = right-left+1;
                minlen = min(minlen,len);

                sum = sum - nums[left];
                left++;
            }
            
        }

        if(minlen==INT_MAX)
        {
            return 0;
        }
        return minlen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna