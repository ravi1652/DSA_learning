#include<bits/stdc++.h>
using namespace std;
void binarytriangle(int n){
    for(int i=0;i<n;i++){
        int start=0;
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
           cout<<start;
           start =1-start;
        }
        cout<<endl;
    }
}
int main(){
    binarytriangle(5);
}