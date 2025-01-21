// 7. Reverse Integer
// Solved
// Medium
// Topics
// Companies
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21
 

// Constraints:

// -231 <= x <= 231 - 1





class Solution {
public:
    int reverse(int x) {
        int original = x;
        if(x == INT_MIN)
            return 0;
        if(original < 0) {
            x *= -1;
        }
        int reversed = 0;

        while(x > 0) {
            int temp = x % 10;
            if(reversed > INT_MAX / 10)
                return 0;
            reversed = (reversed * 10) + temp;
            x /= 10;
        }
        if(original < 0) 
        return (reversed * -1);
        return reversed;
    }
};
