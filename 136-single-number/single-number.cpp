class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int axor=0;
        for(int i=0;i<nums.size();i++)
        {
            axor^=nums[i];
        }
        return axor;
        
    }
};