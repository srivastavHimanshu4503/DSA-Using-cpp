/*
https://leetcode.com/problems/number-of-1-bits/
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        // string binary = "";
        int count = 0;
        // while(n) {
        //     binary = ((n%2 == 0)?'0':'1') + binary;
        //     n /= 2;
        // }
        // for(int i=0; i < binary.size(); i++) {
        //     if(binary[i] == '1')
        //         count++;
        // }

        while(n) {
            if(n&1)
                count++;
            n = n >> 1;
        }
        return count;
    }
};
