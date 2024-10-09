class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance = 0;
        int inserts = 0;

        for (char c : s) {
            if (c == '(') {
                balance++;
            } else {
                if (balance > 0) {
                    balance--;
                } else {
                    inserts++;
                }
            }
        }

        return inserts + balance;
    }
};
