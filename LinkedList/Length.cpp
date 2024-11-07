#include<bits/stdc++.h>
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
Node* length(vector<int>& arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int Length(Node* head){
    int cnt=0;
    Node* c=head;
    while(c){
        c=c->next;
        cnt++;

    }
    return cnt;
}
int main(){
    vector<int> arr={12,3,6,8};
    Node* head=length(arr);
    int y=Length(head);
    cout<<y;
}