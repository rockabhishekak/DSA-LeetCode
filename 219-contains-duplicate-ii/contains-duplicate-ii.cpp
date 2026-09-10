class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            if (mp.find(nums[i]) != mp.end()) {

                int previousIndex = mp[nums[i]];

                if (i - previousIndex <= k) {
                    return true;
                }
            }

            mp[nums[i]] = i;
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna