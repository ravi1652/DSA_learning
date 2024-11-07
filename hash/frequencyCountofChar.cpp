#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    int l=s.size();
    char c;
    cout<<"Enter the charcter to find the count : ";
    cin>>c;
    int count=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]==c){
            count=count+1;
        }
    }
    cout<<"the count is : "<<count;
    return 0;

}