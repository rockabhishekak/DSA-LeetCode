class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = 0;
        int n = accounts.length;
        for(int[] i : accounts)
        {
            int sum = 0;
            for(int j:i)
            {
                sum = sum + j;
            }
            max = Math.max(max,sum);
        }
        return max;
        
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna