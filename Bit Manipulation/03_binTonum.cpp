#include <iostream>
using namespace std;

// int _2powN(int pow) {
//     int ans = 1;
//     while(pow) {
//         ans *= 2;
//         pow--;
//     }
//     return ans;
// }

int bin2num(int binNum) {
    // int i = 0;
    int pw = 1;
    int num = 0;
    while(binNum) {
        int bit = binNum%10;
        if(bit) {
            // num += _2powN(i);
            num += pw;
        }
        // i++;
        pw *= 2;
        binNum /= 10;
    }
    return num;
}

int main() {

    int binNum;
    cout << "Enter binary number: ";
    cin >> binNum;
    
    cout << "The number is " << bin2num(binNum) << endl;
    return 0;
}