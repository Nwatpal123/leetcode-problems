class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(char c: s)
        {
            freq1[c - 'a']++;
        }

        for(char x: t)
        {
            freq2[x - 'a']++;
        }

        if(freq1==freq2)
        {
            return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna