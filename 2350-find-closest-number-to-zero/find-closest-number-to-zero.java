class Solution {
    public int findClosestNumber(int[] nums) {
        int min = nums[0];
        for(int i=1;i<nums.length;i++)
        {
            if(Math.abs(nums[i])<Math.abs(min))
            {
                min =nums[i];
            }
            else if(Math.abs(nums[i]) == Math.abs(min) && nums[i] > 0){
                min = nums[i];
            }
        } 
        return min;      
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna