class Solution {
    public boolean isPalindrome(String s) {
       
        int n = s.length();
        int l=0;
        int r=n-1;
        // if(s==" ")
        // {
        //     return true;
        // }
        while(l<r)
        {
            while(l<r && !Character.isLetterOrDigit(s.charAt(l)))
            l++;
            while(l<r && !Character.isLetterOrDigit(s.charAt(r)))
            r--;
            if (Character.toLowerCase(s.charAt(l)) != Character.toLowerCase(s.charAt(r))) {
                return false;
            }
            l++;
            r--;
            
        }
        return true;

        
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna