#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int n){
 for(int i=0;i<n;i++){
   int j=i;
   while(j>0 && arr[j-1]>arr[j]){
    swap(arr[j-1],arr[j]);
    j--;}
 }
}
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<"th element : ";
        cin>>arr[i];
    }
    InsertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}