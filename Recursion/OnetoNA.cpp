#include <bits/stdc++.h>
using namespace std;

void name(int i, int n) {
    if(i<1) {
        return; 
    }
    
    name(i-1, n); 
    cout << i << " ";
}

int main() {
    int a;
    cin >> a;
    name(3, a);  
    return 0;
}
