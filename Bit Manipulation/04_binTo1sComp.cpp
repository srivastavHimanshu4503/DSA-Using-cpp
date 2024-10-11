#include <iostream>
#include <string.h>
using namespace std;

int main() {

    string binNum;
    cout << "Enter binary number: ";
    cin >> binNum;

    string firstComp = "";
    int i = 0;
    while(i < binNum.length()) {
        if(binNum[i] == '1')
            firstComp += '0';
        else
            firstComp += '1';
        i++;
    }    

    cout << "Actual binary number is " << binNum << endl;
    cout << "Its first component is " << firstComp << endl;
    
    return 0;
}