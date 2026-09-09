class Solution {
public:
    int numberOfSteps(int num) {
        int moves = 0;
        if(num==0) return 0;
        while(num>1)
        {
            if(num%2!=0)
            {
                num--;
                moves++;
            }
            else
            {
                num/=2;
                moves++;
            }
        }
        return moves+1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna