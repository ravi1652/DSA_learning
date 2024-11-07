#include <bits/stdc++.h>
using namespace std;
int partitionIndex(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>=pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;

}
void qs(vector<int> &arr,int low,int high){
    if(low<high){
        int partition=partitionIndex(arr,low,high);
        qs(arr,low,partition-1);
        qs(arr,partition+1,high);
    }
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<"th element : ";
        cin>>arr[i];
    }
    qs(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}