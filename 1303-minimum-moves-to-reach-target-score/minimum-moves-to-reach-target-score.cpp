class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int move = 0;
        while(target>1 && maxDoubles>0)
        {
            if(target%2!=0)
            {
                target--;
                move++;
            }
            else
            {
                target /=2;
                maxDoubles--;
                move++;
            }

        }
        move+=target-1;
        return move;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna