    #include <iostream>
    #include "Queue.h"

    using namespace std;

    template<typename T>
    class PriorityQueue {
    private:
        struct Priority {
            int priority = 0;
            T data;

            Priority(int priority, T data) : priority(priority), data(data) {}
        };

        DoubleLink<Priority> list;
    public:
        void Enqueue(int priority, T data) {
            int i = 0;
            while (i < list.getSize() && priority >= list.access(i).priority) {
                i++;
            }
            list.add(i, Priority(priority, data));
        }

        T Dequeue() {
            Priority contains(0, 0);
            contains = list.access(0);
            list.removeFirst();
            return contains.data;
        }

        T peek() {
            Priority contains(0, 0);
            contains = list.access(0);
            return contains.data;
        }

    };