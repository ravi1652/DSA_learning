#include <bits/stdc++.h>
using namespace std;

void Arm_strong(int n){
    int sum=0;
    int temp=n;
    while(n!=0){
        int ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;
    }
    if(temp==sum){
        cout<<"Given number is ARM_STRONG"<<endl;
    }
    else{
        cout<<"Given number is Not ARM_STRONG"<<endl;
    }
}

int main(){
    Arm_strong(153);
    return 0;
}