class Solution {
public:
    // int count(int k)
    // {
    //     int c =0; //time limit exceeded
    //     while(k>0)
    //     {
    //         int rem = k%10;
    //         if(rem == 1)
    //         {
    //             c++;
    //         }
    //         k=k/10;
    //     }
    //     return c;
    // }
    int countDigitOne(int n) {
    //     int sum = 0;
    //     for(int i = 1 ;i<=n;i++)
    //     {
    //         sum=sum + count(i);

    //     }
    //     return sum;
        
    // }
        long long factor = 1;
        int result = 0;

        while (n / factor > 0) {
            long long lower = n - (n / factor) * factor;
            long long curr  = (n / factor) % 10;
            long long higher = n / (factor * 10);

            if (curr == 0)
                result += higher * factor;
            else if (curr == 1)
                result += higher * factor + lower + 1;
            else
                result += (higher + 1) * factor;

            factor *= 10;
        }
        return result;
    }
};