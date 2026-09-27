class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>pfxl(n);
        vector<int>pfxr(n);
        vector<int>product(n);

        for(int i=0;i<n;i++){
        if(i==0)
        {
            pfxl[i]=1;
        }
        else{

        pfxl[i]=pfxl[i-1]*nums[i-1];
        }

        }
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)
            {
                pfxr[i]=1;
            }
            else{

            pfxr[i]=pfxr[i+1]*nums[i+1];
            }
        }

        for(int i=0;i<n;i++)
        {
            product[i]=pfxl[i]*pfxr[i];
        }

        return product;
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna