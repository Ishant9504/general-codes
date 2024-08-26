#include<iostream>
using namespace std;

// Abstract base class LIST
class LIST {
public:
    // Pure virtual functions
    virtual void store(int value) = 0;
    virtual int retrieve() = 0;
};

// Derived class Stack
class Stack : public LIST {
private:
    static const int MAX_SIZE = 100;
    int stack[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    void store(int value) override {
        if (top < MAX_SIZE - 1) {
            stack[++top] = value;
            cout << "Stored in Stack: " << value << endl;
        } else {
            cout << "Stack Overflow: Cannot store more elements." << endl;
        }
    }

    int retrieve() override {
        if (top >= 0) {
            int value = stack[top--];
            cout << "Retrieved from Stack: " << value << endl;
            return value;
        } else {
            cout << "Stack Underflow: Cannot retrieve from an empty stack." << endl;
            return -1; // You may choose a different way to handle underflow
        }
    }
};

// Derived class Queue
class Queue : public LIST {
private:
    static const int MAX_SIZE = 100;
    int queue[MAX_SIZE];
    int front, rear;

public:
    Queue() : front(-1), rear(-1) {}

    void store(int value) override {
        if (rear < MAX_SIZE - 1) {
            queue[++rear] = value;
            if (front == -1) {
                front = 0; // Adjust front when adding the first element
            }
            cout << "Stored in Queue: " << value << endl;
        } else {
            cout << "Queue Overflow: Cannot store more elements." << endl;
        }
    }

    int retrieve() override {
        if (front <= rear && front != -1) {
            int value = queue[front++];
            cout << "Retrieved from Queue: " << value << endl;
            if (front > rear) {
                front = rear = -1; // Reset front and rear when the last element is retrieved
            }
            return value;
        } else {
            cout << "Queue Underflow: Cannot retrieve from an empty queue." << endl;
            return -1; // You may choose a different way to handle underflow
        }
    }
};

int main() {
    Stack stackObj;
    Queue queueObj;

    // Example usage
    stackObj.store(10);
    stackObj.store(20);
    stackObj.retrieve();

    queueObj.store(30);
    queueObj.store(40);
    queueObj.retrieve();

    return 0;
}
