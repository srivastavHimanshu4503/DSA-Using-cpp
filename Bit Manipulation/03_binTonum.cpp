#include <iostream>
using namespace std;

int bin2num(int binNum) {
    int pw2 = 1;
    int num = 0;
    while(binNum) {
        int bit = binNum%10;
        num += bit*pw2;
        pw2 *= 2;
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