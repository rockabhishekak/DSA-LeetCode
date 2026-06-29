class Solution {
    // LeetHub AI Review: This implementation uses vertical scanning to find the longest common prefix.
    public String longestCommonPrefix(String[] strs) {
        // Time Complexity: O(N * M) where N = number of strings, M = length of the shortest string.
        // Space Complexity: O(1) extra space (ignoring output string).
        if(strs == null ||strs.length==0)
        {
            // Edge case: empty array or null input → no common prefix.
            return "";
        }
        // Iterate character by character of the first string.
        for(int i=0;i<strs[0].length();i++)
        {
            // Compare current character with the same position in all other strings.
            for(int j=1;j<strs.length;j++)
            {
                // If any string is shorter than current index or chars differ, prefix ends here.
                if(i==strs[j].length() || strs[j].charAt(i) != strs[0].charAt(i))
                {
                    // Return substring of first string up to (but not including) index i.
                    return strs[0].substring(0,i);
                }
            }
        }
        // All characters of the first string matched → it is the common prefix.
        return strs[0];
        
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna