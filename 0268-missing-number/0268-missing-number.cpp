class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int sum = n * (n+1)/2;
        int total =0;
        for(int i=0;i<n;i++)
        {
            total = total+nums[i];
        }

        int missing = sum - total ;

        return missing ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna