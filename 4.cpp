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

// Function to reverse the linked list
Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

// Function to insert a new node at the end of the linked list
void append(Node** head, int data) {
    Node* newNode = new Node(data);
    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to display the linked list
void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Function to delete the linked list
void deleteList(Node** head) {
    Node* current = *head;
    Node* next;
    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
    *head = nullptr;
}

int main() {
    Node* head = nullptr;
    // Example usage
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);

    std::cout << "Original List: ";
    display(head);

    head = reverseLinkedList(head);

    std::cout << "Reversed List: ";
    display(head);

    // Cleanup
    deleteList(&head);

    return 0;
}

