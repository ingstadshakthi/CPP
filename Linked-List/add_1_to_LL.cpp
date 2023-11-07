#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
        Node(){
            this->next = NULL;
        }
        
        Node(int data){
            this->data = data;
        }
};


void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}
Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    while(curr != NULL){
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

void addOneToList(Node* head){
    // reverse List
    head = reverse(head);
    
    // Add 1
    Node* temp = head;
    int carry = 1;
    while(temp->next != NULL){
        int digit = temp->data;
        temp->data = (digit + carry) % 10;
        carry = (digit + carry) / 10;
        
        temp = temp->next;
        if(carry == 0){
            break;
        }
    }
    if(carry == 1){
        temp->next = new Node(1);    
    }
    
      // reverse List
    head = reverse(head);
    printLL(head);
}


int main() {
    
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    
    Node* head = first;
    printLL(head);
    
    addOneToList(head);    

	return 0;
}
