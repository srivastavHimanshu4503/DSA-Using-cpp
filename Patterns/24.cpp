#include <iostream>
using namespace std;

int main() {

    int n = 8;

    for(int i = 0; i < n; i++) {
        // Print first triangle
        for(int j = 0; j < n-i; j++) {
            cout << (j+1) << " ";
        }

        // Print second triangle
        for(int k = 0; k < 2*i; k++) {
            cout << "*" << " ";
        }
        
        // Print third triangle
        for(int l = 0; l < n-i; l++) {
            cout << n-i-l << " ";
        }
        
        cout << endl;
    }

    return 0;
}
/*
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/