// Problem No: 191 - Number of 1 Bits
// Link: https://leetcode.com/problems/number-of-1-bits/
// Difficulty: Easy
// Topic: Bit Manipulation
// Logic: Count the number of set bits (1s) in the binary representation of the integer.
//       We use bitwise AND (&) with 1 to check the least significant bit.
//       Then right shift the number by 1 bit to process the next bit.
//       Repeat until the number becomes 0.

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n != 0) {
            if (n & 1) {  
                count++;
            }
            n = n >> 1;   
        }
        return count;
    }
};
