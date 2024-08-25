#include <bits/stdc++.h>
using namespace std;

void name(int i, int n) {
    if(i > n) {
        return;  
    }
    cout << "ravi" <<" ";
    name(i + 1, n);  
}

int main() {
    int a;
    cin >> a;
    name(1, a);  

    return 0;
}
