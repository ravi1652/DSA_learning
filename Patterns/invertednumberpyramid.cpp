#include <bits/stdc++.h>
using namespace std;

void invertednumberpyramid(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    invertednumberpyramid(5);
    return 0;
}