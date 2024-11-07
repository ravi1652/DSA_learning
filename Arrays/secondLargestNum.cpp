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
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int secondLargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>secondLargest && arr[i]<largest){
            secondLargest=arr[i];
        }
    }
    cout<<"Second Largest number is "<<secondLargest;
    return 0;
}