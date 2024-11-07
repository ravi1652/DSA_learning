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
    for(int i=1;i<n;i++){
        if(arr[i]<=arr[i+1]){
            cout<<"Array is sorted"<<endl;
            break;
        }
        else{
            cout<<"Array is not Sorted"<<endl;
            break;
        }
    }
}