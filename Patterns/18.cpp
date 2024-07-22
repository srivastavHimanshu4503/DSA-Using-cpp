#include <iostream>
using namespace std;

int main() {

    int n = 4;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << (char) ('A' + (n-1) - i + j) << " ";
        }
        cout << endl;
    }
    
    return 0;
}
/*
D
C D
B C D
A B C D
*/