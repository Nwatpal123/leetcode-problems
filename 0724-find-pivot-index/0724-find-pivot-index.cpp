class Solution {
public:
vector<int>pfx;
    int pivotIndex(vector<int>& nums) {
        //Build prefix array first 
        pfx.resize(nums.size()+1);
        pfx[0]=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            pfx[i]=pfx[i-1]+nums[i];
        }

        int left_sum =0, right_sum =0;
        for(int j=0;j<nums.size();j++)
        {
            if(j==0)
            {
                 left_sum = 0;
            }
            else
            {
                left_sum = pfx[j-1];
            }

            right_sum = pfx[nums.size()-1] - pfx[j];

            if(left_sum == right_sum )
            {
                return j;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna