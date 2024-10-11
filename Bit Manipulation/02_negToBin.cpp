#include <iostream>
using namespace std;

int main() {

    int s = 0, ans = 1, binRep = 0;
    int num;
    cout << "Enter negative number: ";
    cin >> num;
    
    while(num) {
        if(s) {
            for(int i = 0; i < 1; i++) {
                ans *= 10;
            }   
        }
        else
            ans = 1;
        int bit = num&1;
        binRep = bit*ans + binRep;
        s++;
        num >>= 1;
    }
    cout << "Binary form of given positive number: " << binRep << endl;

    
    return 0;
}