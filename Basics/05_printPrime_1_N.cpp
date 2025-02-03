#include <iostream>
#include <math.h>
using namespace std;

bool check_prime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i < (int)(sqrt((double)n)+1); i++)
        if (n % i == 0) return false;
    return true;
}

int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 2; i <= n; i++)
    {
        if (check_prime(i)) cout << i << " ";
    }

    return 0;
}