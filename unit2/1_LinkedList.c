// A Linked List is a dynamic data structure that consists of nodes where each node contains two parts:

// Data: Stores the actual value.
// Pointer (next): Stores the address/reference of the next node in the list.
// In an Abstract Data Type (ADT), a linked list is an implementation of a sequence that allows for efficient insertion and deletion at any position.

// Types of Linked Lists:
// Singly Linked List: Each node points to the next node.
// Doubly Linked List: Each node points to both the next and the previous node.
// Circular Linked List: The last node points back to the first node.

// C Program to create a Linked List
#include <stdio.h>
#include <stdlib.h>

// Define the structure of Node
typedef struct Node {
  // The typedef is a keyword that is used to provide existing data types with a new name.
    // Data field. Can add more data according to our need
    int data;

    // Pointer to the next node
    struct Node *next;
} Node;
// typedef struct Node { ... } Node;: This defines a new structure called Node which represents a single node in the linked list.
// int data;: This field stores the integer data of the node.
// struct Node *next;: This field is a pointer to the next node in the list. It holds the address of the next node, allowing nodes to be linked together.
// The typedef allows us to refer to the structure as Node instead of struct Node.

int main() {
  
    // Create the First Node of the Linked List
  	// This will serve as the head of the list
    Node *first = (Node *)malloc(sizeof(Node));
//     Node *first: This declares a pointer first of type Node*, which will point to the first node of the linked list.
// (Node *)malloc(sizeof(Node)): The malloc function allocates memory for a Node structure. The sizeof(Node) ensures that the right amount of memory is allocated. The malloc returns a pointer to the allocated memory, which is typecast to Node *.

    // Assigning data
    first->data = 10;

    // Creating the second node in the list
    Node *second = (Node *)malloc(sizeof(Node));

    // Assigning data
    second->data = 20;

    // Creating the third node
    Node *third = (Node *)malloc(sizeof(Node));

    // Assigning data
    third->data = 30;

    // Linking the nodes
    first->next = second; // This will create: 10 -> 20
    second->next = third; // This will create: 10 -> 20 -> 30
    third->next = NULL;   // This will create: 10 -> 20 -> 30 -> NULL

    printf("Linked List: ");
    Node* temp = first;
  	while(temp) {
      printf("%d ", temp->data);
      temp = temp->next;
    }

    return 0;
}
