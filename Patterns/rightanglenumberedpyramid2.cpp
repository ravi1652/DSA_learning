#include <bits/stdc++.h>
using namespace std;

void rightanglepyramid2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main(){
    rightanglepyramid2(5);
    return 0;
}