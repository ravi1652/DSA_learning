#include <bits/stdc++.h>
using namespace std;

void name(int i, int n) {
    if(n<1) {
        return;  // Return here should be void, not 0
    }
    cout << n << " ";
    name(i, n-1);  // Recursive call with i+1
}

int main() {
    int a;
    cin >> a;
    name(1, a);  // Start the recursion with i=1
    return 0;
}
