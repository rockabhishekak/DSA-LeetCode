class Solution {
    public int maxArea(int[] height) {
        int n = height.length;
        int ans = 0;
        int l = 0;
        int r = n-1;
        while(l<r)
        {
            int k = Math.abs(l-r);
            if(height[l]<height[r])
            {
                ans = Math.max(ans,height[l]*k);
                l++;
            }
            else
            {
                // int p = Math.abs(l-r);
                ans = Math.max(ans,height[r]*k);
                r--;
            }
        }
        return ans;

        
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna