class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size(), maxFreq = 0, maxLen = 0, start = 0;
        unordered_map<char, int> freq;
        for (int end = 0; end < n; end++) {
            freq[s[end]]++;
            maxFreq = max(maxFreq, freq[s[end]]);

            // len - maxFreq <= K
            while((end - start + 1) - maxFreq > k) {
                // shrink
                freq[s[start]]--;
                start++;
            }

            maxLen = max(maxLen, end - start + 1);
        }

        return maxLen;
    
    }
};