#include <bits/stdc++.h>
using namespace std;

int febi(int n){
    if(n<=1) return n;
    int last=febi(n-1);
    int slast=febi(n-2);
    return last+slast;
}
int main(){
    int n;
    cin>>n;
    cout<<febi(n)<<" ";
    return 0;
}