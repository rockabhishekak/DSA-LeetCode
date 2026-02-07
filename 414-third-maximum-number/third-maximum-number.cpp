class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long int f = LONG_MIN, s = LONG_MIN , t = LONG_MIN;
        for(int num:nums)
        {
            if(num == f || num == s || num ==t)
            {
                continue;
            }
            else if(num>f)
            {
                t = s;
                s = f;
                f = num;
            }
            else if(num > s)
            {
                t = s;
                s = num;
            }
            else if(num>t)
            {
                t = num;
            }

        }
        if(t==LONG_MIN)
        {
            return f;
        }
        return t;
        
    }
};