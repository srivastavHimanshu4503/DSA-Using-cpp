// https://leetcode.com/problems/convert-the-temperature/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double farenheit = celsius*1.80 + 32;

        vector<double> ans;
        ans.emplace_back(kelvin);
        ans.emplace_back(farenheit);

        return ans;
    }
};