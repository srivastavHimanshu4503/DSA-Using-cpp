// Hollow Diamond
/*
    * 
   * *
  *   *
 *     *
*       *
*       *
 *     *
  *   *
   * *
    *
*/
#include <iostream>
using namespace std;

int main() {

    int n = 5;
    // Full Pyramid
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < 2*i+1; j++)
        {
            if (j==0 || j==i) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    // Inverted Pyramid
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < 2*(n-i)-1; j++)
        {
            if (j==0 || j==n-i-1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    

    return 0;
}