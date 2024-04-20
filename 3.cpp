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

// Merge two sorted linked lists
Node* merge(Node* left, Node* right) {
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;

    Node* result = nullptr;
    if (left->data <= right->data) {
        result = left;
        result->next = merge(left->next, right);
    } else {
        result = right;
        result->next = merge(left, right->next);
    }
    return result;
}

// Split the linked list into two halves
void split(Node* source, Node** front, Node** back) {
    if (source == nullptr || source->next == nullptr) {
        *front = source;
        *back = nullptr;
        return;
    }

    Node* slow = source;
    Node* fast = source->next;

    while (fast != nullptr) {
        fast = fast->next;
        if (fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    *front = source;
    *back = slow->next;
    slow->next = nullptr;
}

// Merge sort algorithm for linked list
void mergeSort(Node** head) {
    Node* current = *head;
    Node* left;
    Node* right;

    if (current == nullptr || current->next == nullptr)
        return;

    split(current, &left, &right);

    mergeSort(&left);
    mergeSort(&right);

    *head = merge(left, right);
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
    append(&head, 5);
    append(&head, 2);
    append(&head, 8);
    append(&head, 3);
    append(&head, 1);
    append(&head, 7);

    std::cout << "Original List: ";
    display(head);

    mergeSort(&head);

    std::cout << "Sorted List: ";
    display(head);

    // Cleanup
    deleteList(&head);

    return 0;
}

