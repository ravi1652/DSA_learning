#include <bits/stdc++.h>
using namespace std;
void leftrotate(int arr[],int n,int d){
        reverse(arr,arr+d);
        reverse(arr+d,arr+n);
        reverse(arr,arr+n);
        
    }
int main(){
    
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<"th Element : ";
        cin>>arr[i];

    }
    int d;
    cout<<"enter shifts : ";
    cin>>d;

    leftrotate(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}