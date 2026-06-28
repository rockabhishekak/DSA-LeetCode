class Solution {
    public int[] findErrorNums(int[] nums) {
        int n = nums.length;
        int[] freq = new int[n + 1];
        int duplicate = -1, missing = -1;

        for (int num : nums) {
            freq[num]++;
            if (freq[num] == 2)
                duplicate = num;
        }

        for (int i = 1; i <= n; i++) {
            if (freq[i] == 0) {
                missing = i;
                break;
            }
        }

        return new int[]{duplicate, missing};
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna