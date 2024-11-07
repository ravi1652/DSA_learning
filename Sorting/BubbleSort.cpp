#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
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
    BubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}