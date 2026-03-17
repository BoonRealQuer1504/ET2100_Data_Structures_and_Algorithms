#include <iostream>
using namespace std;

// Create a struct with two values
struct Node {
    int value;
    Node* next;
    
    // Constructor to initialize the node with a given value
    Node(int val): value(val), next(nullptr) {}
};


class LinkedList{
    public: Node* head; Node* tail;
    
    
    void insertFront(int value){
        cout << "Inserting " << value << '\n';
        
        Node* newNode = new Node(value);
        
        newNode-> next = head;
        
        head = newNode;
    }
    
    
    void insertAtEnd(int value){
        Node* newNode = new Node(value);
        Node* current = head;
        
        
        if (head==NULL){
            head= newNode;
            tail= newNode;
            return ;
        }
        tail->next= newNode;
        tail = newNode;
    }
    
    
     void printValues() {
        if (head == NULL) {
            return;
        } else {
            Node* current = head;
            while (current != NULL) {
                cout << current -> value << ' ';
                current = current -> next;
            }
            cout << '\n';
        }
    }
    
    
    void insertAfterK(int value, int k) {

        Node* newNode = new Node(value);
        Node* current = head;
        
        // If there are no nodes in the linked list
        // Set the new node as head and return
        if (head == NULL) {
            head = newNode;
            return;
        }
        
        // Iterate to the k-th node
        for (int i = 1; i < k; i++) {
            current = current -> next;
        }
        
        // Set the next of new Node to next of current
        newNode -> next = current -> next;
        
        // Set the next of current to new Node
        current -> next= newNode;
    }
    
    void deleteNode(int value){
        if(head->value == value){
            Node*targetNode= head;
            head= targetNode->next;
            delete targetNode;
        }
        
        else {
            Node*iter = head;
            while(iter->next!=NULL){
                if (iter->next-> value == value){
                    Node* temp = iter-> next;
                    iter-> next = iter-> next -> next;
                    delete temp;
                    break;
                }
                iter = iter -> next;
            }
        }
    }
    
    
    
    int getHeadValue(){
        if (head==NULL) return -1;
        else return head-> value;
    }
    
    
    int getLastValue(){
        if (head==NULL) return -1;
        else {
            return tail->value;
        }
    }
};


int main() {
    LinkedList* list = new LinkedList();
  
    list -> insertFront(3);
    cout << "The value at the head is: " << list -> getHeadValue() << '\n';
    list -> insertFront(2);
    cout << "The value at the head is: " << list -> getHeadValue() << '\n';
    
    
    int n; cin >> n;
    int x; for (int i=0;i<n;i++){
        cin >> x;
        list->insertAtEnd(x);
        cout << list->getLastValue()<< " ";
    }
    
    
    // Linked List - Insertion at k-th position
    int n; cin >> n; int value, k; cin >> value >> k;
    int x; for (int i=0;i<n;i++){
        cin >> x;
        list->insertAtEnd(x);}
    list->insertAfterK(value,k);
    Node* current = list->head;
    while(current!=NULL){
        cout << current->value<< ' ';
        current= current-> next;
    }
    
    
    
    // Optimal insertion at the end
    int n; cin >> n;
    int x; for (int i=0;i<n;i++){
        cin >> x;
        list->insertAtEnd(x);
    }
    list-> printValues();


  
    // Delete from front / form any position
    int n, value; cin >> n>> value;
    int x; for (int i=0;i<n;i++){
        cin >> x;
        list->insertAtEnd(x);
    }
    list->deleteNode(value);
    list->printValues();

}