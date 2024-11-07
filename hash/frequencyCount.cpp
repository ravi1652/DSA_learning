#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<"th element : ";
        cin>>arr[i];
    }
    int number;
    cout<<"Enter the number which you want to find : ";
    cin>>number;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==number){
            count++;
        }
    }
    cout<<"the number repeated :"<<count<<endl;
    return 0;
}