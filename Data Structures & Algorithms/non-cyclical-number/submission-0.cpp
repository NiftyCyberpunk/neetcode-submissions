class Solution {
private:
    int digitSquareSum(int num){
        int sum = 0;
        while(num > 0){
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> seen;

        while(n != 1){
            seen.insert(n);
            n = digitSquareSum(n);
            if(seen.count(n)){
                return false;
            }
        }
        return true;
    }
};
