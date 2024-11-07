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
    int temp=arr[0];
    int i=0;
    for(int j=1;j<n;j++){
        arr[i]=arr[j];
        i++;
        
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}