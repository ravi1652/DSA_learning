#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<"th Element : ";
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the element to be searched :";
    cin>>m;
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            cout<<"element is found";
        }
        else{
            cout<<"element not found";
        }
    }
    return 0;
}