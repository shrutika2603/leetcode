class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        sort(s.begin(), s.end(), [&](char a, char b) {
            if (freq[a] != freq[b]) {
                return freq[a] > freq[b]; 
            } else {
                return a < b; 
            }
        });
        
        return s;
    }
};
