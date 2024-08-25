#include <bits/stdc++.h>
using namespace std;

void fun(int i,int n){
    if(i>n){
        return;
    }
    fun(i+1,n);
    cout<<i<<" ";
}
int main(){
    int a;
    cin>>a;
    fun(1,a);
    return 0;
}