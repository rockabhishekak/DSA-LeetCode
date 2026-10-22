class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        int pi = 0;
        int ni=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ans[pi]=nums[i];
                pi=pi+2;
            }
            else{
                ans[ni]=nums[i];
                ni=ni+2;
            }
        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna