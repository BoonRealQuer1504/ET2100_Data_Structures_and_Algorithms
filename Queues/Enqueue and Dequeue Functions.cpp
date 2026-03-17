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
    rear = (rear+1)%maxSize; // Circular increment
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

bool isEmpty(){
    if(currentSize == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(){
    if(currentSize == maxSize)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int size(){
    return currentSize;
}
