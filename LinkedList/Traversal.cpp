#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1,Node* next1=nullptr){
        data=data1;
        next=next1;
    } 
};
Node* Travesal(vector<int>& arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;

    }
    return head;
}
int main(){
    vector<int> arr={12,6,92,6};
    Node* y=Travesal(arr);
    Node* cur=y;
    while(cur){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    return 0;
}