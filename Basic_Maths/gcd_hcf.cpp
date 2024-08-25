#include <bits/stdc++.h>
using namespace std;

void gcd(int n,int m){
    if(m==0){
        cout<<n;
    }
    else{
        cout<<(m,n%m);
    }
}
int main(){
    gcd(10,20);
    return 0;
}