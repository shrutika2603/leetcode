#include <vector>
#include <cmath>

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) {
            return 0;
        }

        std::vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i <= sqrt(n); i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (bool prime : isPrime) {
            if (prime) {
                count++;
            }
        }

        return count;
    }
};
