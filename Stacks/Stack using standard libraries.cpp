#include <iostream>
#include <stack>

using namespace std;
int main() {
    stack<int> myStack; 
    // Adding elements (push)
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Accessing the top element
    int topElement = myStack.top();
    cout << "Top element: " << topElement << endl;

    // Removing elements (pop)
    myStack.pop();
    topElement = myStack.top();
    cout << "Top element after pop: " << topElement << endl;

    return 0;
}