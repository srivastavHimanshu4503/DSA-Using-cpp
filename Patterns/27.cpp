// Hollow Full Pyramid 
/*
     *
    * *
   *   *
  *     *
 *       *
***********
*/
#include <iostream>
using namespace std;

int main() {

    int n = 6;
    for(int i = 0; i < n; i++)
    {
        // for spaces
        for(int j = 0; j < n-i; j++) cout << ' ';

        // for stars
        for(int k = 0; k < 2*i+1; k++)
        {
            if (k == 0 || k == 2*i || i == n-1 || i == 0) cout << '*';
            else cout << ' ';
        }

        cout << endl;        
    }
    

    return 0;
}