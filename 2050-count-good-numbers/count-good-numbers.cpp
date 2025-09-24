class Solution {
public:
    const long long MOD = 1e9 + 7;

    long long power(long long x,long long y){
        if(y==0) return 1; 
        long long ans = power(x, y/2);
        ans = (ans * ans) % MOD;
        if(y % 2) ans = (ans * x) % MOD;  // <-- handle odd exponent
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long odd = n / 2;           // odd indices → primes (4 choices)
        long long even = n / 2 + n % 2;  // even indices → 0,2,4,6,8 (5 choices)
        return (power(5, even) * power(4, odd)) % MOD;
    }
};
