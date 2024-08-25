#include <bits/stdc++.h>
using namespace std;
void reverse(int a[],int l,int r){
    if (l>=r) return;
    swap(a[l],a[r]);
    reverse(a,l+1,r-1);
}
int main(){
    int n;
    cin>>n;
    int a[n]={1,2,3,4,5};
    reverse(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}