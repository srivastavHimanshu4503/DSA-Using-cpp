// Pascal's Triangle
/*
          1   
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
1   5   10   10   5   1
*/
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    if (n <= 1) return 1;
    for(int i=2; i <= n; i++) fact *= i;
    return fact;
}

int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n-r);
    int value = numerator / denominator;
    return value;
}

int main() {

    int n = 6;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)  cout << "  ";
        for(int j = 0; j <= i; j++) cout << nCr(i, j) << "   ";
        cout << endl;
    }

    return 0;
}