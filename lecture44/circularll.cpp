#include<iostream>
 using namespace std;
 class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
      this->data = d;
      this->next = NULL;

    }

    ~Node(){
      int value = this->data;
      //memory free
      if(this->next != NULL){
         delete next;
         this->next;
      }
      cout<<"memory id free for node with data"<<value<<endl;
    }
    };

    void insertNode(Node* &tail, int element, int d){
      //assuming that the element is present in the list
      if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
      }
      else{
        //non empty list
        // assume that element is present in the list
        Node* curr = tail;
        while(curr->data!=element){
          curr = curr->next;
        } 
        //element found
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
      }
    }
    void print(Node* tail){
      Node* temp = tail;
      do{
        cout<<tail->data<<" ";
        tail = tail->next;
      }while(tail!= temp);
      cout<<endl;
    }
    void deleteNode(Node* &tail, int value){
      //empty list
      if(tail == NULL){
        cout<<"List is empty, please chech again"<<endl;
        return;
      }
      else{
        //non empty

        //assuming that value is present in the Linked List
        Node* prev = tail;
        Node* curr =  prev->next;
        while(curr->data!=value){
          prev = curr;
          curr = curr->next;

        } 
        prev->next = curr->next; 
        if(curr = prev){
          tail = NULL;
        }
        else if(tail == curr){
          tail == prev;
        }
        curr->next = NULL;
        delete curr;
      } 
    }

   int main(){

    Node* tail = NULL;
    
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
    return 0;

   }
