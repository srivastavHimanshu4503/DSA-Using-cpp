#include <iostream>
using namespace std;

int main() {

    int n, k;
    cout << "Enter the value of n and k: ";
    cin >> n >> k;

    int ans = n | (1<<k);
    cout << "The answer is " << ans;

    return 0;
}