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
        int slow = n;
        int fast = digitSquareSum(n);

        while(slow != fast){
            slow = digitSquareSum(slow);
            int fast1 = digitSquareSum(fast);
            fast = digitSquareSum(fast1);

            if(fast == 1){
                return true;
            }
        }
        if(fast == 1){
            return true;
        }
        return false;
    }
};
