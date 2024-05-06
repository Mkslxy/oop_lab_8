#include <iostream>
#include "DoubleLink.h"

using namespace std;

template<typename T>
class Queue {
private:
    DoubleLink<T> list;
public:
    void Enqueue(T data){
        list.AddLast(data);
    }

    T Dequeue(){
        T data = list.access(0);
        list.removeFirst();
        return data;
    }

    T peek(){
        T data = list.access(0);
        return data;
    }

    bool isEmpty(){
        return !list.isEmpty();
    }

    bool isFull(){
        return !list.isEmpty();
    }

};
