#include <iostream>
using namespace std;

int main() {

    int n = 4;

    for(int i = 1; i <= n; i++) {
        int temp, count = 1;
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= (2*i - 1); k++) {
            if (count <= i) {
                cout << count++;
                temp = count - 2; 
            }
            else
                cout << temp--;
        }
        cout << endl;   
    }
    

    return 0;
}
/*
   1
  121
 12321
1234321
*/