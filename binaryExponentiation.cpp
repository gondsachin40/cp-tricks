/*
Case 1: If B = 0, whatever be the value of A, our result will be 1.
Case 2: If B is an even number, then instead of calculating (AB), we can calculate ((A2)B/2) and the result will be same.
Case 3: If B is an odd number, then instead of calculating (AB), we can calculate (A * (A(B - 1)/2)2),
*/


//for double 
class Solution {
public:
    double binpow(double x , int n){
        if(n == 0){
            return 1.0;
        }
        if(n % 2 == 0){
            double fx = get(x , n / 2);
            return fx * fx;
        }else{
            double fx = get(x , (n - 1) / 2);
            return x * fx * fx;
        }
    }
    double myPow(double x, int n) {
        if(n >= 0)
        return binpow(x , n);
        else
        return 1.0 / binpow(x , abs(n));
    }
};

//for long long
    long long binpow(long long x , long long n){
        if(n == 0){
            return 1LL;
        }
        if(n % 2 == 0){
            long long fx = get(x , n / 2);
            return fx * fx;
        }else{
            long long fx = get(x , (n - 1) / 2);
            return x * fx * fx;
        }
    }


//with mod

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
