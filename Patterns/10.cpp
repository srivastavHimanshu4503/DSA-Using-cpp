#include <iostream>
using namespace std;

int main() {

    int n = 5;

    for(int i = 0; i < n; i++) {
        int temp = i+1;
        for(int j = 0; j <= i; j++) {
            cout << temp-- << " ";    
        }
        cout << endl;
    }
    

    return 0;
}
/*
1
2 1
3 2 1
4 3 2 1
*/