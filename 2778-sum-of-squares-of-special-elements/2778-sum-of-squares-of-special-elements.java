class Solution {
    public int sumOfSquares(int[] nums) {
        int ans=0;
        for(int i=1;i<=nums.length;i++)
        {
            if(nums.length%i==0)
            {
                ans = ans + nums[i-1]*nums[i-1];
            }
        }
        return ans;
        
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna