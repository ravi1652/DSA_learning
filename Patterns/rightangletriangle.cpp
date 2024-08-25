#include <bits/stdc++.h>
using namespace std;

void rightanglrtriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    rightanglrtriangle(5);
    return 0;
}