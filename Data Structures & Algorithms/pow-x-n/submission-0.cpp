class Solution {
private:
    double product(double x, int n){
        if(n == 0){
            return 1;
        }
        return x * product(x, n - 1);
    }
public:
    double myPow(double x, int n) {
        long long exp = n;
        if(n < 0){
            x = 1/x;
            exp = -exp;
        }
        return product(x, exp);
    }
};
