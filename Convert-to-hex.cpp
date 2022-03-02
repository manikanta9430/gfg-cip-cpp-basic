#include <bits/stdc++.h>
using namespace std;


void decTohex(int a) {

    // code here
    cout<<hex<<a;
}


int main() {

    int t;
    cin >> t;

    while (t--) {
        int a;
        cin >> a;
        decTohex(a);
        cout << endl;
    }
}  
