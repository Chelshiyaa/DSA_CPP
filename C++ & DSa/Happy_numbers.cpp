class Solution {
public:
    int getSumOfSquares(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        int org = n;
        int sq = getSumOfSquares(n);
        while (sq != 1 && org != sq) {
            org = getSumOfSquares(org);           
            sq = getSumOfSquares(getSumOfSquares(sq));
        }

        return fast == 1; 
    }
};
