#include <iostream>
#include <memory>
#include "Stack.h"
#include "PriorityQueue.h"

using namespace std;

int main() {
    Queue<int> first_queue;
    first_queue.Enqueue(4);
    first_queue.Enqueue(2);
    first_queue.Enqueue(5);
    for (int i = 0; i < 3; ++i) {
        cout << first_queue.peek() << "\n";
        first_queue.Dequeue();
    }

    cout << endl;

    PriorityQueue<int> first;
    first.Enqueue(100, 132);
    first.Enqueue(25, 1);
    first.Enqueue(75, 2000);
    first.Enqueue(1, 2);
    for (int i = 0; i < 4; i++) {
        cout << first.Dequeue() << " ";
    }

    cout << endl;

    Stack<5, int> first_stack;
    first_stack.push(1);
    first_stack.push(2);
    first_stack.push(3);
    first_stack.push(4);
    first_stack.push(5);
    if (first_stack.isFull()) {
        for (int i = 0; i < 5; i++) {
            cout << first_stack.peek() << "\n";
            first_stack.pop();
        }
    } else if (first_stack.isEmpty()) {
        throw out_of_range("Error");
    }
    return 0;
}