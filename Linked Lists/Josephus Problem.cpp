#include <iostream>
using namespace std;
// Create a struct with two values
struct Node {
    int value;
    Node* next;
    
    // Constructor to initialize the node with a given value
    Node(int val): value(val), next(nullptr) {}
};

class CircularLinkedList{
    public: Node* head; Node*tail;
    
    
    CircularLinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insertAtEnd(int value){
        Node*newNode = new Node(value);
        if (head==NULL){
            head=newNode;
        }
        
        
        else {
            tail-> next= newNode;
        }
        
        tail = newNode;
        tail-> next = head;
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
            while(current!=head);
            cout << '\n';
        }
    }
    
    
    void deleteNode(int value){
        if (head==tail and head->value == value){
            head = NULL;
            tail = NULL;
        }
        else {
            Node* iter = head;
            if (head-> value == value){
                head = head-> next;
                tail-> next = head;
                return;
            }
            
            else {
                while(iter->next != NULL and iter!=tail){
                    if (iter-> next-> value == value){
                        if(iter->next == tail){
                            tail=iter;
                        }
                        iter-> next = iter-> next -> next;
                        break;
                        
                    }
                    
                    iter= iter-> next;
                }
              }  }
    }
};

int solveJosephus(CircularLinkedList* list){
    Node* killer = list -> head;
    while(killer->next != killer){
        list->deleteNode(killer->next->value);
        killer = killer->next;
    }

    return list->head->value;
}


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        CircularLinkedList* list = new CircularLinkedList();
        for (int i=0;i<n;i++){
            list-> insertAtEnd(i+1);
        }

        cout << solveJosephus(list)<< endl;
    }
}