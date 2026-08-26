class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sortedarr = arr;
        sort(sortedarr.begin(),sortedarr.end());
        unordered_map<int, int> rank;
        int r = 1;

        for (int x : sortedarr) {
            if (rank.find(x) == rank.end()) {
                rank[x] = r++;
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = rank[arr[i]];
        }

        return arr;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna