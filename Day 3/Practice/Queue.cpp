#include <iostream>
#define INT_MIN 0
using namespace std;

 
class Queue {
public:
    int front, rear, size;
    unsigned capacity;
    int* array;
};
 
  
Queue* createQueue(unsigned capacity){
    Queue* queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;
 
    queue->rear = capacity - 1;
    queue->array = new int[queue->capacity];
    return queue;
}
     
int isFull(Queue* queue){
    return (queue->size == queue->capacity);
}
     
int isEmpty(Queue* queue){
    return (queue->size == 0);
}

void enqueue(Queue* queue, int item)
{
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    cout << item << " added to queue"<< endl;
}

int dequeue(Queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}
 
int peek(Queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->front];
}
 
int rear(Queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->rear];
}

void display(Queue* queue) {
   if (queue->front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are => ";
      for (int i = queue->front; i <= queue->rear; i++)
        cout<<queue->array[i]<<" ";
      cout<<endl;
   }
}


int main()
{
    Queue* queue = createQueue(1000);
 
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
 
    cout << dequeue(queue)<< " popped"<<endl;
    display(queue);
    cout << "Front => "<< peek(queue) << endl;
    cout << "Rear => "<< rear(queue) << endl;
 
    return 0;
}
