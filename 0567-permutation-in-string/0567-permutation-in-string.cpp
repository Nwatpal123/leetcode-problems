class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();
        int c = n-(m-1);

        vector<int>freq1(26,0);

        if(n<m)
        {
            return false;
        }
        for(int i=0;i<m;i++)
        {
            freq1[s1[i]-'a']++;
        }

        for(int i=0;i<c;i++)
        {
            vector<int>freq2(26,0);

            for(int j=i;j<i+m;j++)
            {
                freq2[s2[j]-'a']++;
            }

            if(freq1==freq2)
            {
                return true;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna