class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        
        int l = 0;
        vector<bool> v;
        for(int n : nums){
            l = ((l*2) + n) % 5;   //Convert Binary to decimal
            v.push_back(l==0);
        }
        return v;
    }
};