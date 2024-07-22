#include <iostream>
using namespace std;

int main() {

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    
    int count = 1;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < rows; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}
/*
123
456
789
*/