//This is a good way to get some practise with traversing a linked list. Print each node's data element, one per line, given a pointer to the head node of a linked list. There //is nothing to output if the head reference is null (meaning the list is empty).

#include <bits/stdc++.h>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;
};

//Inserts an element at the end 
void insertAtEnd(Node* &head, int data){
      
      Node* newNode = new Node;
      newNode->data=data;
      newNode->next = NULL;
      
      Node* tmp = head;
     
      if (head == NULL) { 
        head = newNode; 
        return; 
      } 
     
      while(tmp->next!=NULL){
          tmp = tmp->next;
      }
      
      tmp->next = newNode;
}

//prints all the elements of LinkedList
void printLinkedList(Node* ptr)
{
    cout<<"LinkedList elements are : "<<endl;
    while (ptr != NULL) {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}
 
int main()
{
    int p;
    cout<<"Number of entries in LinkedList -> ";
    cin>>p;
    
    Node* head = NULL;
    
    for(int i = 0 ; i < p ; i++){
        int x;
        cout<<"Enter data -> ";
        cin>>x;
        insertAtEnd(head,x);
    }

    printLinkedList(head);
 
    return 0;
}
