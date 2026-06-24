class Solution {
    public int[] sortedSquares(int[] nums) {
        int n = nums.length;
        int L = 0;
        int R = n-1;
        int[] ans = new int[n];
        int p = n-1;
        while(L<=R)
        {
            int ls = nums[L]*nums[L];
            int rs = nums[R]*nums[R];
            if(ls>rs)
            {
                ans[p--]=ls;
                L++;
            }
            else
            {
                ans[p--]=rs;
                R--;
            }


        }
        return ans;
        
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna