#include <iostream>
using namespace std;

int main() {

    int first = 0;
    int second = 1;

    int n;
    cout << "Enter number of terms you want to generate for fibbonacci series: ";
    cin >> n;
    
    cout << 0 << " " << 1 << " ";
    for(int i = 0; i < n-2; i++) {
        int sum = first + second;
        cout << sum << " ";
        first = second;
        second = sum;
    }
    

    return 0;
}