#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int n){
 for(int i=0;i<n-1;i++){
    int min=i;
    for(int j=i;j<=n-1;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    }
    swap(arr[min],arr[i]);
 
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
    SelectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}