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
    int j=-1;
    for(int i=0;i<n;i++){
            if(arr[i]==0){
                j=i;
                break;
            }
        
    }
     for(int i=j+1;i<n;i++){
       if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
       }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}