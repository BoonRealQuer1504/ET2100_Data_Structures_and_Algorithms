#include <bits/stdc++.h>
using namespace std;
#include<stack>

int precedence(char op){
    if (op =='+' or op =='-') return 1;
    else if (op =='*' or op == '/') return 2;
    else if (op == '^') return 3;
    else return 0;
}

bool isLeftAssociative(char op){
    return (op=='+' or op=='-' or op =='*' or op=='/');
}

string solve(string &s){
    stack<char> operators;
    string output;

    for (char ch: s){
        if (isalnum(ch)){
            output+=ch;
        }

        else if (ch =='('){
            operators.push(ch);
        }

        else if (ch ==')'){
            while(!operators.empty() and operators.top() != '('){
                output+= operators.top();
                operators.pop();         
            }
            operators.pop();
        }

        else{
            while(!operators.empty() and precedence(operators.top()) > precedence(ch)){
                if (isLeftAssociative(ch) and precedence(operators.top())== precedence(ch)){
                    break;
                }

                output+=operators.top();
                operators.pop();
            } 

            operators.push(ch);
        }
    }

    while(!operators.empty()){
        output+=operators.top();
        operators.pop();
    }

    return output;

}

int main() {
    int t;
    cin >> t;  // Read number of test cases
    cin.ignore();  // Ignore the newline character after reading t

    while (t--) {
        string expression;
        getline(cin, expression);  // Read the expression line
        string rpn = solve(expression);  // Convert to RPN
        cout << rpn << endl;  // Output the RPN expression
    }
    return 0;
}