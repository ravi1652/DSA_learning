#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of an Array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<"th Element : ";
        cin>>arr[i];
    }
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<"count : "<<mpp[number]<<endl;
    }
    return 0;
}