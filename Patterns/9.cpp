#include <iostream>
using namespace std;

int main() {

    int n = 4;

    for(int i = 0; i < n; i++) {
        int temp = i+1;
        for(int j = 0; j <= i; j++) {
            cout << temp++ << " ";    
        }
        cout << endl;
    }
    

    return 0;
}
/*
1
2 3
3 4 5
4 5 6 7
*/