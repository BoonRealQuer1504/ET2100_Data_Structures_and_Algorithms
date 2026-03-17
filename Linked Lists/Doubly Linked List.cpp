#include <iostream>
using namespace std;
// Create a struct with two values
struct Node {
    int value;
    Node* next;
    Node* prev;
    // Constructor to initialize the node with a given value
    Node(int val): value(val), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList{
public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }


    void insertAtEnd(int value){
        Node*newNode = new Node(value);
        if (head==NULL){
            head=tail=newNode;
        }
        
        
        else {
            tail-> next= newNode;
            newNode->prev= tail;
            tail = newNode;
        }

        
        
        
    }
    
    
    
    void printValues() {
        if (head == NULL) {
            return;
        } else {
            Node* current = head;
            do {
                cout << current->value<<" ";
                current = current->next;
            }
            while(current!=NULL);
            cout << '\n';
        }
    }






    void insertAtIndex(int index, int value){
        Node* newNode= new Node(value);
        if (index ==0){
            newNode->next = head;
            if (head!=NULL){
                head->prev= newNode;
            }

            head = newNode;
        }


        else {
            Node* iter = head;
            for (int i=0;i<index-1;i++){
                iter = iter -> next;
            }

            Node*A= iter;
            Node*B = iter -> next;
            A-> next = newNode;
            if (B!=NULL){
                B-> prev = newNode;
            }
            newNode-> next = B;
            newNode-> prev = A;
        }
    }



    void deleteNode(int value){
        Node* targetNode = head;
        while(targetNode->value!=value){
            targetNode= targetNode-> next;
        }

        Node*A = targetNode-> prev;
        Node*B = targetNode-> next;
        if (A!=NULL) A-> next = B;
        if (B!=NULL) B-> prev = A;
        if (targetNode==head) head = B;
        delete targetNode;
    }


};

int main(){


    //Insertion in Doubly Linked List
    int n, index, value;
    cin >> n >> index >> value;
    DoublyLinkedList* list= new DoublyLinkedList();

    int x;
    for (int i=0;i<n;i++){
        cin >> x;
        list->insertAtEnd(x);
    }

    list->insertAtIndex(index,value);
    list->printValues();




    //Deletion - Doubly Linked List
    int n, value;
    cin >> n >> value;
    DoublyLinkedList* list= new DoublyLinkedList();

    int x;
    for (int i=0;i<n;i++){
        cin >> x;
        list->insertAtEnd(x);
    }
    list -> deleteNode(value);
    list->printValues();

}