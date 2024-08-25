#include <bits/stdc++.h>
using namespace std;
void halfdaimond(int n){
    for(int i=0;i<2*n-1;i++){
        int printingstars=i;
        if(i>n) printingstars=2*n-i;
        for(int j=1;j<=printingstars;j++){
            cout<<"*";
            
        }
        cout<<endl;
    }
}
int main(){
    halfdaimond(5);
}