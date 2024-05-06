#include <iostream>

using namespace std;

template<size_t SIZE, typename T>
class Stack {
private:
    T stack[SIZE] = {};
    int first = -1;

public:
    void push(T database) {
        first++;
        stack[first] = database;
    }

    void pop() {
        first--;
    }

    T peek() {
        return stack[first];
    }

    bool isEmpty() {
        if (first == -1) {
            return true;
        } else {
            return false;
        }
    }

    bool isFull() {
        if (first == SIZE - 1) {
            return true;
        } else {
            return false;
        }
    }
};