/*
         1
        1 2
       1   3
      1     4
     1       5
    1         6
   1           7
  1             8
 1               9
1 2 3 4 5 6 7 8 9 10
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++) cout << " ";
        for(int j = 1; j <= i+1; j++)
        {
            if (i==0 || i==n-1) cout << j << " ";
            else {
                if (j == 1) cout << 1 << " ";
                else if (j == i+1) cout << j << " ";
                else cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}