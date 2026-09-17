class NumArray {
public:
        vector<int>pfx;

    NumArray(vector<int>& nums) {
         pfx.resize(nums.size() + 1);
        pfx[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            pfx[i]=pfx[i-1]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)
        {
            return pfx[right];
        }
        int sum = pfx[right]-pfx[left-1];
            return sum ;

    
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna