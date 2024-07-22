#include <iostream>
using namespace std;

int main() {

    int n = 3;

    for(int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for(int j = 0; j < n; j++) {
            cout << (char) (ch++) << " ";
        }
        cout << endl;
    }
    
    return 0;
}
/*
A B C
B C D
C D E
*/