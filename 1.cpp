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

// Stack class implemented using a linked list
class Stack {
private:
    Node* top; // Pointer to the top of the stack

public:
    // Constructor to initialize an empty stack
    Stack() {
        top = nullptr;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Push operation to add an element to the top of the stack
    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    // Pop operation to remove the element from the top of the stack
    int pop() {
        if (isEmpty()) {
            std::cerr << "Stack is empty. Cannot pop.\n";
            return -1; // Error condition
        }
        int popped = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return popped;
    }

    // Peek operation to get the element at the top of the stack without removing it
    int peek() {
        if (isEmpty()) {
            std::cerr << "Stack is empty. Cannot peek.\n";
            return -1; // Error condition
        }
        return top->data;
    }

    // Display the elements of the stack
    void display() {
        if (isEmpty()) {
            std::cout << "Stack is empty.\n";
            return;
        }
        Node* current = top;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Destructor to free the memory allocated to the stack nodes
    ~Stack() {
        while (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }
};

// Example usage
int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);

    std::cout << "Stack: ";
    stack.display();

    std::cout << "Popped: " << stack.pop() << std::endl;

    std::cout << "Peek: " << stack.peek() << std::endl;

    std::cout << "Stack after pop and peek: ";
    stack.display();

    return 0;
}

