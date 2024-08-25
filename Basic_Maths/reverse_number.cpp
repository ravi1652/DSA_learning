#include<bits/stdc++.h>
using namespace std;
void reversenum(int n){
    int result=0;
    while(n!=0){
        int last_digit=n%10;
        result=(result*10)+last_digit;
        n=n/10;
    }
    cout<<result;
}
int main(){
    cout<<"Enter n:";
    int a;
    cin>>a;
    reversenum(a);
}