class Solution {
public:
    bool isUgly(int n) {
        int factor[] = {2,3,5};
        if(n<=0) return false;
        for(int f:factor)
        {
            while(n%f==0)
            {
                n/=f;
            }

        }
        return n==1;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna