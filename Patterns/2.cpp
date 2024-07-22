#include <iostream>
using namespace std;

int main() {

    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < row; j++) {
            cout << (i+1);
        }
        cout << endl;
    }
    return 0;
}
/*
11111
22222
33333
44444
55555
*/