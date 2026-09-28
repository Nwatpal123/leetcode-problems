class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int maxarea =0;

        while(left<right)
        {
            int width = right-left;
            int hieght = min(height[left],height[right]);

            int area = hieght * width;

            maxarea=max(area,maxarea);
        
        if(height[left]<height[right])
        {
            left++;
        }
        else{
            right--;
        }
        }
        return maxarea;
    }
        
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna