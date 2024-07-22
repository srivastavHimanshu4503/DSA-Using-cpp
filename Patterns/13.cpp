#include <iostream>
using namespace std;

int main() {

    int n = 3;

    // char ch = 'A';
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) {
    //         cout << ch++ << " ";
    //     }
    //     cout << endl;
    // }

    int count = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n; j++) {
            cout << (char) ('A' + count++) << " ";
        }
        cout << endl;
    }
    

    return 0;
}
/*
A B C
D E F
G H I
*/