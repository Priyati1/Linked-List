#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int d){
        data=d;
        next=NULL;
    }
};
void insert_from_front(node*&head,node*&tail,int data){
    node *n=new node(data);
    if(head==NULL && tail==NULL){
        head=n;
        tail=n;
    }
    else{
        n->next=head;
        head=n;
    }
}
void insert_from_end(node*&head,node*&tail,int data){
    node *n=new node(data);
    if(head==NULL && tail==NULL){
        head=n;
        tail=n;
    }
    else{
        tail->next=n;
        tail=n;
    }
}
int length(node*&head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
void insert_at_any_position(node*&head,node*&tail,int data,int position){
    node *n=new node(data);
    if(position==0){
        insert_from_front(head,tail,data);
    }
    else if(position>=length(head)){
        insert_from_end(head,tail,data);
    }
    else{
        node *temp=head;
        node *n=new node(data);
        for(int i=1;i<=position-1;i++){
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;
    }
}


















int main(){
    return 0;
}