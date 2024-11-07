#include <bits/stdc++.h>
using namespace std;
class Ravi{
    public:
    int data;
    Ravi* next;
    Ravi(int data1,Ravi* next1=nullptr){
        data=data1;
        next=next1;
    }
};
Ravi* travelsal(vector<int>& arr){
    Ravi* head=new Ravi(arr[0]);
    Ravi* mover=head;
    for(int i=1;i<arr.size();i++){
        Ravi* temp=new Ravi(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int Check(Ravi* head,int val){
    Ravi* c=head;
    while(c){
        if(c->data==val) cout<<"yes";
        c=c->next;
    }
    return 0;
}
int main(){
    vector<int> arr={1,5,24,98};
    Ravi* head=travelsal(arr);
    int m=Check(head,24);
    cout<<m;
}