#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val): data(val),next(NULL){}
};

Node* deleteMiddle(Node* head){
    if(!head || !head->next) return NULL;

    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    while(fast && fast->next){
        fast = fast->next->next;
        prev= slow;
        slow = slow->next;
    }
    prev->next= slow->next;
    delete slow;
    return head;
}

void printList(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    printList(head);
    head = deleteMiddle(head);
    printList(head);
    return 0;
}