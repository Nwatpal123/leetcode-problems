class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int idx = abs(nums[i]) - 1;
            if(nums[idx]>0)
            {
                nums[idx]=-nums[idx];
            }
            else
            {
                ans.push_back(abs(nums[i]));
            }
            
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna