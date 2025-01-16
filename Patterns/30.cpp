// Butterfly
/*
*                 * 
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*/
#include <iostream>
using namespace std;

int main() {

    int n = 5;
    // Upper Part
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++) cout << "* ";
        for(int j = 0; j < 2*(n-1-i); j++) cout << "  ";
        for(int j = 0; j <= i; j++) cout << "* ";
        cout << endl;
    }
    // Lower Part
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < n-i; j++) cout << "* ";
        for(int j = 0; j < 2*i; j++) cout << "  ";
        for(int j = 0; j < n-i; j++) cout << "* ";
        cout << endl;
    }

    return 0;
}