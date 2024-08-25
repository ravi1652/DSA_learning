#include <bits/stdc++.h>
using namespace std;

void name(int i, int n) {
    if(i > n) {
        return;  // Return here should be void, not 0
    }
    cout << i<< " ";
    name(i + 1, n);  // Recursive call with i+1
}

int main() {
    int a;
    cin >> a;
    name(1, a);  // Start the recursion with i=1
    return 0;
}
