/*
https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/
*/
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        while(n) { // Code will stop when n becomes zero
            product *= n%10; // Get the last digit of the number 'n'
            sum += n%10;
            n /= 10; // Reduce the number by removing the last digit
        }
        
        int ans = product - sum;
        return ans;
        //Time complexity = O(log n)
        //Space complexity = O(1)
    }
};