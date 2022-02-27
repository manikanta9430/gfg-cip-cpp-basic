// { Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends
// User function Template for C++
int count=0;
void utility() {

    // declare the variable count here
    // increases the value of count by 1
    count++;

    // print count
    cout << count;
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;

    int n;
    cin >> n;

    while (n--) {

        utility();
        cout << " ";
    }

    return 0;
}  // } Driver Code Ends
