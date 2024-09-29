class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ans;   // Final result
        int count = 0; // To track characters between dashes

        // Traverse the string in reverse to avoid multiple reversals
        for (int i = s.length() - 1; i >= 0; --i) {
            // Ignore dashes
            if (s[i] == '-') continue;

            // Append the character in uppercase
            ans.push_back(toupper(s[i]));
            count++;

            // Insert dash after every 'k' characters except at the end
            if (count == k) {
                ans.push_back('-');
                count = 0;  // Reset count after adding a dash
            }
        }

        // Remove any trailing dash (if added)
        if (!ans.empty() && ans.back() == '-') {
            ans.pop_back();
        }

        // Since we built the string in reverse, reverse it before returning
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
