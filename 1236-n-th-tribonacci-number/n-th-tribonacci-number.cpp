class Solution {
public:
    int tribonacci(int n) {
        std::vector<int> trib(n + 1);
        if (n == 0) return 0;
        if (n <= 2) return 1;
        trib[1] = trib[2] = 1;
        for (int i = 3; i <= n; i++)
            trib[i] = trib[i - 1] + trib[i - 2] + trib[i - 3];
        return trib[n];
    }
};