//Operations on Linked List

#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

 //Inserts an element at beginning 
 void insertAtBeg(Node* &head, int data){
      Node* tmp = new Node;
      tmp->data = data;
      tmp->next = head;
      
      head = tmp;
  }
  
 //Inserts an element at the end 
 void insertAtEnd(Node* &head, int data){
      Node* newNode = new Node;
      
      Node* tmp = head;
      while(tmp->next!=NULL){
          tmp = tmp->next;
      }
      
      tmp->next = newNode;
      newNode->data=data;
      newNode->next = NULL;
  }
  
 //Inserts an element in the middle 
 void insertAtMid(Node* &head, int data, int pos){
      Node* newNode = new Node;
      newNode->data=data;

      Node* tmp = head;
 
      int i = 1 ;
      while(i != pos-1){
            tmp = tmp->next;
            i++;
      }
      
      newNode->next = tmp->next;
      tmp->next = newNode;
      
  }
 
 //Delete the first element
 void deleteAtBeg(Node* &head){
      head = head->next;
  }
  
 //Delete the last element
 void deleteAtEnd(Node* &head){
      Node *tmp = head;
      while(tmp->next->next!=NULL){
          tmp = tmp->next;
      }
      tmp->next=NULL;
  }
  
  //Delete the middle element
  void deleteAtMid(Node* &head, int pos){
      Node* tmp = head;
 
      int i = 1 ;
      while(i != pos-1){
            tmp = tmp->next;
            i++;
      }
      tmp->next=tmp->next->next;
      
  }
  
  //Ckecks if the element exists in the list or not
  bool existsOrNot(struct Node* head, int key) {
  Node* tmp = head;

  while (tmp != NULL) {
    if (tmp->data == key) 
        return true;
      tmp = tmp->next;
   }
   return false;
 }

int main() {
    Node* head = NULL;

    insertAtBeg(head, 5);
    insertAtBeg(head, 2);
    insertAtBeg(head, 3);
    insertAtBeg(head, 4);

    insertAtEnd(head, 9);
    insertAtEnd(head, 6);

    insertAtMid(head, 8, 3);
    
    deleteAtBeg(head);
    deleteAtEnd(head);
    deleteAtMid(head,3);
    
  
    Node* tmp = head;
        while (tmp != NULL) {
            cout << tmp->data<<" ";
            tmp = tmp->next;
      }
      
    if(existsOrNot(head,96)){
        cout<<"Exists";
    }else{
        cout<<"Does Not Exist";
    }

}
