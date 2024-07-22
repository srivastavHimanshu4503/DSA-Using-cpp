#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter number: ";
    cin >> num;

    int sum = 0;
    for(int i = 0; i < num; i++) {
        if((i+1)%2 == 0)
            sum += (i+1); 
    }

    cout << sum << endl;
    return 0;
}