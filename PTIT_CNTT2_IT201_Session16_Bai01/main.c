#include <stdio.h>
#include <stdlib.h>

// Định nghĩa cấu trúc Node cho danh sách liên kết
typedef struct Node {
    int data;               // Dữ liệu kiểu số nguyên
    struct Node* next;      // Con trỏ đến phần tử tiếp theo
} Node;

// Định nghĩa cấu trúc Queue
typedef struct Queue {
    Node* front;           // Con trỏ đến node đầu tiên
    Node* rear;            // Con trỏ đến node cuối cùng
} Queue;

// Hàm khởi tạo hàng đợi trống
Queue* initializeQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}