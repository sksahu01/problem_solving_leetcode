class Solution {
public:
    double myPow(double x, long long n) {
        if(n == 0) return 1;        

        if(n < 0) {                  
            x = 1 / x;               
            n = -n;             
        }

        double half = myPow(x, n / 2);   // Divide exponent into halves

        if(n % 2 == 0) 
            return half * half;      // If even exponent
        else 
            return half * half * x;  // If odd exponent
    }
};
