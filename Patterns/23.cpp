#include <iostream>
using namespace std;

int main() {

    int n = 4;

    // for(int i = 1; i <= n; i++) {
    //     int temp, count = 1;
    //     for(int j = 1; j <= n-i; j++) {
    //         cout << " ";
    //     }
    //     for(int k = 1; k <= (2*i - 1); k++) {
    //         if (count <= i) {
    //             cout << count++;
    //             temp = count - 2; 
    //         }
    //         else
    //             cout << temp--;
    //     }
    //     cout << endl;   
    // }

    for(int i = 1; i <= n; i++)
    { 
        for(int j = 1; j <= n-i; j++) cout << "  ";
        int j = 1;
        for(; j <= i; j++) cout << j << " ";
        int k = j-2;
        for(; k >= 1; k--) cout << k << " ";
        cout << endl;
    }
    
    

    return 0;
}
/*
      1 
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/