#include <bits/stdc++.h>
using namespace std;

#define maxSize 101
int a[maxSize];
int front = 0; // Index of the front element
int rear = -1;  // Index of the rear element
int currentSize;

bool isEmpty(){
    return currentSize == 0;
}

bool isFull(){
    return currentSize == maxSize;
}

int size(){
    return currentSize;
}

void enqueue(int item) {
    if (isFull()) {
        cout<<"Queue is full. Cannot enqueue.\n";
        return;
    }
    rear = (rear+1) % maxSize; // Circular increment
    a[rear] = item;
    currentSize++;
}

int dequeue(){
    if (isEmpty()) {
        cout<<"Queue is empty. Cannot dequeue.\n";
        return -1; // Return a sentinel value or throw an exception
    }
    int removedItem = a[front];
    front = (front + 1) % maxSize; // Circular increment
    currentSize--;
    return removedItem;
}

int taskList[10];
int taskListsize = 0;

void addTask(int task){
    int taskExist=0;
    for (int i=0;i<taskListsize;i++){
        if(task==taskList[i]){
            taskExist=1;
            break;
        }
    }
    
    if(!taskExist){
        enqueue(task);
        taskList[taskListsize]=task;
        taskListsize++;
    }
}

void displayToDoList() {
    // Implement the method to display the current to-do list.
    for (int i=front;i<taskListsize;i++){
        cout << taskList[i]<< endl;
    }
    return;

}

int main(){
    int n=10;
    // Read up to 10 tasks from input and add them to the to-do list
    for(int i=0 ; i<n ; i++){
        int task;
        cin>>task;
        addTask(task);
    }

    // Display the current to-do list
    displayToDoList();
}