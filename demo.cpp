#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Node{
    int val;
    Node* next;
public:
    int get_val(){
    return val;
    }
    Node* get_next(){
    return next;
    }
    Node(int value,Node* nextRef):val{value},next{nextRef}{}
};
void pushList(Node** head,int val){
     Node* n = new Node(val,*head);
     *head = n;
}

void printList(Node* head){
   while(head!=NULL){
    cout<<head->get_val();
    head= head->get_next();
   }
}

int main(void){
  Node* head = NULL;
  cout<<head;
  pushList(&head,1);
  pushList(&head,2);
  pushList(&head,3);
  printList(head);
  return 0;
}

