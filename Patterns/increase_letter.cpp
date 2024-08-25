#include <bits/stdc++.h>
using namespace std;

void increasing_number(int n){

    for(int i=1;i<=n;i++){
        for(char j='A';j<'A'+i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    increasing_number(5);
    return 0;
}