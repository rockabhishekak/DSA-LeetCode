class Solution {
    public int trap(int[] height) {
        int n = height.length;
        int l=0;
        int r=n-1;
        int lmax = 0;
        int rmax=0;
        int ans = 0;
        while(l<r)
        {
            lmax = Math.max(lmax,height[l]);
            rmax = Math.max(rmax,height[r]);
            if(lmax<rmax)
            {
                ans += lmax - height[l];
                l++;
            }
            else
            {
                ans += rmax - height[r];
                r--;
            }

        }
        return ans;

        
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna