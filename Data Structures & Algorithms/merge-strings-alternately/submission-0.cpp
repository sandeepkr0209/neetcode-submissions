class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int low1 = 0, low2 = 0;
        int n1 = word1.size(), n2 = word2.size();

        string ans = "";

        while (low1 < n1 && low2 < n2) {
            ans.push_back(word1[low1]);
            low1++;
            ans.push_back(word2[low2]);
            low2++;
        }

        while (low1 < n1) {
            ans.push_back(word1[low1]);
            low1++;
        }
        while (low2 < n2) {
            ans.push_back(word2[low2]);
            low2++;
        }
        return ans;
    }
};