#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

Queue* initializeQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

Node* createNode() {
    Node* newNode = (Node*)malloc(sizeof(Node));
    printf("Nhap so nguyen: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    return newNode;
}

void enqueue(Queue* queue) {
    Node* newNode = createNode();
    if (queue->front == NULL) {
        queue->front = newNode;
        queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

int main() {
    Queue* queue = initializeQueue();
    printf("Them mot phan tu vao hang doi:\n");
    enqueue(queue);
    if (queue->front != NULL) {
        printf("Phan tu dau tien trong hang doi: %d\n", queue->front->data);
    } else {
        printf("Hang doi rong!\n");
    }
    return 0;
}