#include <iostream>
using namespace std;

int main() {

    int n = 4;

    // First Pattern
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i-1; j++) {
            cout << " " ;
        }
        for(int k = 1; k <= n-i+1; k++) {
            cout << i;
        }
        cout << endl;
    }

    // Second Pattern
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i-1; j++) {
            cout << " " ;
        }
        for(int k = i; k <= n; k++) {
            cout << k;
        }
        cout << endl;
    }

    // Third Pattern
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            cout << " " ;
        }
        for(int k = 1; k <= i; k++) {
            cout << i;
        }
        cout << endl;
    }
    
    // Fourth Pattern
    int count = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            cout << " " ;
        }
        for(int k = 1; k <= i; k++) {
            cout << count++;
        }
        cout << endl;
    }

    return 0;
}
/*Four patterns
1111
 222
  33
   4
1234
 234
  34
   4
   1
  22
 333
4444
   1
  23
 456
78910
*/