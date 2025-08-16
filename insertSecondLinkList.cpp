#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val): data(val),next(NULL){}
};

Node* findMiddle(Node* head){
    Node* fast = head;
    Node* slow = head;
    Node* prev = NULL;
    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
void printList(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* insertList(Node* head, Node* middle, Node* head2){
    Node* temp = middle->next;
    middle->next = head2;
    while(head2->next){
        head2=head2->next;
    }
    head2->next=temp;
    return head;
}
int main(){
    Node* head = new Node(1);
    head->next=new Node(2);
    head->next->next = new Node(3);
    Node* head2= new Node(5);
    head2->next = new Node(7);
    head2->next->next=new Node(8);
    Node* middle = findMiddle(head);
    cout<<"The first List is ";
    printList(head);
    cout<<"The second List is ";
    printList(head2);
    head = insertList(head,middle,head2);
     cout<<"The Merged List is ";
    printList(head);
    return 0;
}