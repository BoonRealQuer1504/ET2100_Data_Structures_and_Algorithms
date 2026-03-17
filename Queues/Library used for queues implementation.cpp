#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    int item = myQueue.front();
    myQueue.pop();
    cout << item <<' '<< myQueue.front()<< endl;
}