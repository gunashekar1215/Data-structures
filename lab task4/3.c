#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

Node* concatenateLists(Node* head1, Node* head2) {
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;

    Node* temp = head1;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head2;

    return head1;
}

void displayLinkedList(Node* head) {
    if (head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }
    
    printf("Linked List: ");
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

Node* createLinkedList(int n) {
    Node* head = NULL;
    int data;
    
    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertAtEnd(&head, data);
    }
    
    return head;
}

int main() {
    int n1, n2;
    
    printf("Enter the number of nodes for the first linked list: ");
    scanf("%d", &n1);
    Node* head1 = createLinkedList(n1);
    
    printf("Enter the number of nodes for the second linked list: ");
    scanf("%d", &n2);
    Node* head2 = createLinkedList(n2);
    
    printf("\nFirst Linked List:\n");
    displayLinkedList(head1);
    
    printf("\nSecond Linked List:\n");
    displayLinkedList(head2);
    
    head1 = concatenateLists(head1, head2);
    
    printf("\nConcatenated Linked List:\n");
    displayLinkedList(head1);
    
    return 0;
}
