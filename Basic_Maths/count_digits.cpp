#include <bits/stdc++.h>
using namespace std;
void count_digits(int n){
    int result=0;
    while(n!=0){
        n=n/10;
        result++;
    }
    cout<<result;
}
int main(){
    count_digits(5234);
    return 0;
}