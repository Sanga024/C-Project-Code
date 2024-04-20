#include <iostream>

// Node class for individual elements in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Queue class implemented using a linked list
class Queue {
private:
    Node* front; // Pointer to the front of the queue
    Node* rear; // Pointer to the rear of the queue

public:
    // Constructor to initialize an empty queue
    Queue() {
        front = rear = nullptr;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Enqueue operation to add an element to the rear of the queue
    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Dequeue operation to remove the element from the front of the queue
    int dequeue() {
        if (isEmpty()) {
            std::cerr << "Queue is empty. Cannot dequeue.\n";
            return -1; // Error condition
        }
        int dequeued = front->data;
        Node* temp = front;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr; // Reset rear if the queue becomes empty
        }
        delete temp;
        return dequeued;
    }

    // Peek operation to get the element at the front of the queue without removing it
    int peek() {
        if (isEmpty()) {
            std::cerr << "Queue is empty. Cannot peek.\n";
            return -1; // Error condition
        }
        return front->data;
    }

    // Display the elements of the queue
    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty.\n";
            return;
        }
        Node* current = front;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Destructor to free the memory allocated to the queue nodes
    ~Queue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
        rear = nullptr; // Reset rear pointer
    }
};

// Example usage
int main() {
    Queue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);

    std::cout << "Queue: ";
    queue.display();

    std::cout << "Dequeued: " << queue.dequeue() << std::endl;

    std::cout << "Peek: " << queue.peek() << std::endl;

    std::cout << "Queue after dequeue and peek: ";
    queue.display();

    return 0;
}

