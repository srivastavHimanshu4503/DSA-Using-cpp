#include <bits/stdc++.h>
using namespace std;

int main() {

    string st;
    // Number range between 0 to 9
    cout << "Enter the string like a1b3 etc: ";
    cin >> st;
    
    int i = 0;
    while(i < (st.length()-1)) {
        int j = i + 1;
        int cnt = st[j];
        for(int k = 0; k < (cnt-48); k++) {
            cout << st[i];
        }
        i += 2;
    }

    return 0;
}