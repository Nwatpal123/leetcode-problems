class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
       int i=0;
       int j=arr.size()-1;
       
       while(i<j)
       {
        int sum = arr[i]+arr[j];
            if(target<sum)
            {
                j--;
            }
            if(target>sum)
            {
                i++;
            }
            if(sum==target)
            {
                return {i+1,j+1};
            }
        }
    return {};
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna