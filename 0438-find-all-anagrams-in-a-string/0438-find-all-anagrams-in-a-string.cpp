class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m = s.length();
        int n = p.length();
        vector<int>ans;
        if(m<n){
            return ans;
        }

        vector<int>freq1(26,0);
        vector<int>freq2(26,0);

        for(int i=0;i<n;i++)
        {
            freq1[p[i]-'a']++;
            freq2[s[i]-'a']++;
        }
            if(freq1 == freq2)
            {
                ans.push_back(0);
            }
        
        for(int i=n;i<m;i++)
        {
            freq2[s[i-n]-'a']--;
            freq2[s[i]-'a']++;

            if(freq1 == freq2)
            {
                ans.push_back(i-n+1);
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna