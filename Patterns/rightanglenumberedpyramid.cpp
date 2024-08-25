#include <bits/stdc++.h>
using namespace std;

void rightanglepyramid(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    rightanglepyramid(5);
    return 0;
}