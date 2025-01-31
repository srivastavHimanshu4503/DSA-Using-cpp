#include <iostream>
#include <math.h>
using namespace std;

void usingDivisonMethod(int posNum) {    
    int binaryNum = 0;
    int i = 0;
    while(posNum) {
        int bit = posNum%2;
        binaryNum += bit*pow(10, i++);
        posNum  /= 2;
    }

    cout << "Binary form of given positive number: " << binaryNum << endl;
}

void usingBitwiseMethod(int posNum) {    
    int binaryNum = 0;
    int i = 0;
    while(posNum) {
        int bit = posNum & 1;
        binaryNum += bit*pow(10, i++);
        posNum  >>= 1;
    }

    cout << "Binary form of given positive number: " << binaryNum << endl;
}

int main() {

    int posNum;
    cout << "Enter positive number: ";
    cin >> posNum;

    usingBitwiseMethod(posNum);
    usingDivisonMethod(posNum);

    return 0;
}