class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int longest = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)        {
            st.insert(nums[i]);
        }
        
        for(int x:st)

        {
            int cnt =1;
            if(st.find(x-1)==st.end()){
            int current = x;
            

            while(st.find(current+1)!=st.end())
            {
                cnt++;
                current++;
            
            }
            }

        
         longest = max(cnt,longest);
       
        }
         return longest;
        }
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna