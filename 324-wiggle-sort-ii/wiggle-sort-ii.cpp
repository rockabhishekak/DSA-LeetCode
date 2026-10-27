class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(),temp.end());
        int n = nums.size();
        int mid = (n+1)/2;
        int left = mid-1;
        int right = n-1;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                nums[i] = temp[left];
                left--;

            }
            else{
                nums[i] = temp[right];
                right--;
            }
        }

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna