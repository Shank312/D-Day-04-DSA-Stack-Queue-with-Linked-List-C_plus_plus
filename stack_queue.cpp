
/*
Implement:

Stack using singly linked list

Queue using singly linked list

Practice insertion, deletion, peek/front 
*/

#include <iostream>                          // Required for input and output operations
using namespace std;

// ======= Node Class for both Stack and Queue ======= 
class Node {
public:
    int data;                               // Data stored in the node
    Node* next;                             // pointer to the next node

// Constructor to initialize a new node
Node(int value) {
    data = value;
    next = nullptr;
    }
};
// ======== Stack implementation Using Singly Linked List =======
class Stack {
    private:
        Node* top;                          // Pointer to the top element of the stack
    public:
        // Constructor initializes top as nullptr (empty stack)
        Stack() {
            top = nullptr;
        }

        // Push a new value onto the stack
        void push (int value) {
            Node* newNode = new Node(value); // Create a new node
            newNode->next = top;             // Link new node to current top
            top =newNode;                    // Update top to the new node
            cout << "Pushed: " << value << endl;
        }

        // Pop the top value from the stack
        void pop() {
            if (!top) {                      // Stack is empty
                cout << "Stack is empty\n";
                return;
            }
            Node* temp = top;                // temporary pointer to delete
            top = top->next;                 // Move top to the next node
            cout << "Popped: " << temp->data << endl;
            delete temp;                     // Free memory
            }

            // Pick at the top element without removing it
            void peek() {
                if (!top) {
                    cout << "Stack is empty\n";
                    return;
                }
                cout << "Top element: " << top->data << endl;
            }
        

            // Display the entire stack
            void display() {
                Node* temp = top;
                cout << "Stack: ";
                
                while(temp) {
                    cout << temp->data << " -> ";
                    temp = temp->next;
                }
                cout << "Null\n";

            }
};

// ======= Queue Implementation Using Singly Linked List ========
class Queue {
    private: 
        Node* frontNode;                          // Point to the front of the Queue
        Node* rearNode;                           // Point to the rear of the Queue
    public:
        // Constructor initializes front and rear nullptr (empty queue)
        Queue() {
            frontNode = rearNode = nullptr;
        }

        // Enqueue (add) a new value to the rear
        void enqueue (int value) {
            Node* newNode = new Node(value);       // Create a new node

            if (!rearNode) {                       // If queue is empty
                frontNode = rearNode = newNode;

            }
            else
            { 
                rearNode->next = newNode;          // Link the current rear to the new node
                rearNode = newNode;                // Update rear pointer
            }

            cout << "Enqueued: " << value << endl;
        }

        // Dequeue (remove) a value from front
        void dequeue() {
            if (!frontNode) {  // Queue is empty
                cout << "Queue is empty!\n";
                return;

            }

            Node* temp = frontNode;                // Temporary pointer to delete
            frontNode = frontNode->next;           // Move front to next node

            // If queue becomes empty, Update rear node to nullptr
            if (!frontNode) {
                rearNode = nullptr;

            cout << "Dequeued: " << temp->data << endl;
            delete temp;                           // Free memory

            }
        };

        // View front value without removing it
        void front() {
            if (!frontNode) {
                    cout << "Queue is empty\n";
                    return;
                }
                cout << "Front element: " << frontNode->data << endl;
            }

            // Display the entire Queue
            void display() {
                Node* temp = frontNode;
                cout << "Queue: ";
                while(temp) {
                    cout << temp->data << " -> ";
                    temp = temp->next;
                }
                cout << "Null\n";
            }
};

// ======= Main Function to Test Stack and Queue =======
int main() {
    // Stack Testing
    Stack s;
    s.push(10);                                          // Push 10
    s.push(20);                                          // Push 20
    s.peek();                                            // View top element
    s.pop();                                             // Pop top element
    s.display();                                         // Display full stack

    cout << "\n";

    // Queue Testing
    Queue q;
    q.enqueue(100);                                      // Enqueue 100
    q.enqueue(200);                                      // Enqueue 200
    q.front();                                           // View front element
    q.dequeue();                                         // Dequeue front element
    q.display();                                         // Display full queue


    return 0;

}





