#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n){
    int result=0;
    int temp=n;
    while(n!=0){
        int last_digit=n%10;
        result=(result*10)+last_digit;
        n=n/10;
    }
    return (temp==result);
  

}
int main(){
    cout<<"Enter n:";
    int a;
    cin>>a;
    if(palindrome(a)){
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
    return 0;
}