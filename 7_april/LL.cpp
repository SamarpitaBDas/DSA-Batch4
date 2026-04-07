//to make khudka linked list -- take user data -- and then print it 
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createList(int n) {
    Node *head = NULL, *temp = NULL, *newNode;
    int value;

    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;

        newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    return head;
}

// Print linked list
void printList(Node* head) {
    Node* temp = head;
    cout << "Linked List: ";

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node* head = createList(n);
    printList(head);

    return 0;
}