#include <iostream>
using namespace std;

int main() {

    int n = 4;

    for(int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++) {
            cout << (char) (ch++) << " ";
        }
        cout << endl;
    }
    
    return 0;
}
/*
A 
B C
C D E
D E F G
*/