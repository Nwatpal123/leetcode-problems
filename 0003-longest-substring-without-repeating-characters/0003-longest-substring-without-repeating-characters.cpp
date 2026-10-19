class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int left=0;
        int maxlen=0;
        vector<int>freq(128,0);
        for(int right = 0;right<n;right++)
        {
            while(freq[s[right]]>0)
            {
                freq[s[left]]--;
                left++;
            }

            freq[s[right]]++;
        

            maxlen=max(maxlen,right-left+1);
        }
        
    
        return maxlen;
        
    }

    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna