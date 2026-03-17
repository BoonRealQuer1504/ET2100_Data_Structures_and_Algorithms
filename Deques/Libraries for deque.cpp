#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    // Thêm phần tử
    dq.push_back(10);   // [10]
    dq.push_back(20);   // [10, 20]
    dq.push_front(5);   // [5, 10, 20]
    dq.push_front(36);
    // Duyệt
    cout << "Deque: ";
    for (int x : dq) {
        cout << x << " ";
    }
    cout << endl;

    // Truy cập
    cout << "Front: " << dq.front() << endl; // 36
    cout << "Back: " << dq.back() << endl;   // 20
    cout << "Index 1: " << dq[2] << endl;    // 10

    // Xóa phần tử
    dq.pop_front();  // [5, 10, 20]
    dq.pop_back();   // [5, 10]

    cout << "After pop: ";
    for (int x : dq) {
        cout << x << " ";
    }
}