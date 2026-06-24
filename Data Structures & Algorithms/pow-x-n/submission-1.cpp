class Solution {
private:
    double product(double x, int n){
        if(n == 0){
            return 1;
        }
        if(n % 2 == 0){
            return product(x * x, n / 2);
        }
        else{
            return x * product(x * x, n / 2);
        }
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
