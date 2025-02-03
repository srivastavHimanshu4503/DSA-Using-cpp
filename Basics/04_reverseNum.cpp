#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter number: ";
    cin >> num;
    
    int ans = 0;
    // int sme = 0, pw = 1;
    while(num) {
        int digit = num%10;
        ans = ans*10 + digit;
        // sme = digit*pw + sme; 
        // pw *= 10;
        num /= 10;
    }
    cout << "Reverse number is " << ans << endl;
    // cout << "Same number is " << sme << endl;

    return 0;
}