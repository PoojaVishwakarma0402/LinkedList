# LinkedList
# C++ Singly Linked List Implementation

This C++ program demonstrates a simple implementation of a singly linked list. A singly linked list is a fundamental data structure consisting of nodes, where each node contains data and a reference to the next node in the list.

## Introduction

This code showcases a basic implementation of a singly linked list in C++. It offers functionality for creating and manipulating the list, including inserting elements at the head and displaying the list.

## Features

- **Node Class**: The code defines a `Node` class with two attributes: `data` to store the data and `next` to point to the next node in the list.

- **Insertion at Head**: The `insertAtHead` function allows you to add a new element at the beginning of the linked list, which is a common operation in linked list manipulation.

- **Display Function**: The `display` function prints the elements of the linked list, making it easy to visualize the contents of the list.

## Usage

1. Clone or download the repository to your local machine.

2. Compile the C++ code using a C++ compiler (e.g., g++).

    ```bash
   g++ linked_list.cpp -o linked_list

   
## Code Structure

linked_list.cpp: The main C++ file containing the singly linked list implementation, the Node class, and the insertion and display functions.

## Prerequisites

C++ compiler (e.g., g++)

## Examples
Here's a basic example of how to use this linked list implementation:

Node* head = nullptr;
insertAtHead(head, 1);
display(head);
insertAtHead(head, 2);
display(head);
