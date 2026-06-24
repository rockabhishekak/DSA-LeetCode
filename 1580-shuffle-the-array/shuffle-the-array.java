class Solution {
    //ye even odd place wala question hai.
    public int[] shuffle(int[] nums, int n) {
        int[] ans = new int[2*n];
        for(int i=0;i<n;i++)
        {
            ans[i*2]=nums[i];
            ans[i*2+1]=nums[i+n];

        }
        return ans;
        
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna