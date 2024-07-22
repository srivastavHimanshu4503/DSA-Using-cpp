#include <iostream>
using namespace std;

int main() {

    int n = 3;

    // char ch = 'A';
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) {
    //         cout << ch << " ";
    //     }
    //     ch++;
    //     cout << endl;
    // }

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n; j++) {
            cout << (char) ('A' + i - 1) << " ";
        }
        cout << endl;
    }
    

    return 0;
}
/*
A A A
B B B
C C C
*/