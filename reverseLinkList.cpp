#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val): data(val),next(NULL){}
};

Node* reverseList(Node* head){
    if(!head || !head->next) return head;
    Node* newhead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
void printList(Node* head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){
    Node* head= new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    cout<<"Original list ";
    printList(head);
    head = reverseList(head);
    cout<<"Reversed list ";
    printList(head);
return 0;

}