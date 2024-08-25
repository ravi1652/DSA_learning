#include <bits/stdc++.h>
using namespace std;

void prime_number(int n){
    if(n<=1) cout<<"NO";
    if(n==2 || n==3) cout<<"YES";
    if(n%2==0 || n%3==0) cout<<"NO";
    for(int i=5;i<n;i++){
        cout<<"NO";
    }  
   
}
int main(){
    prime_number(25);
    return 0;
}