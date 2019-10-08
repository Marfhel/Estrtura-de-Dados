#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 6

struct  queue
{
    int items[QUEUE_SIZE];
    int front, rear;

};

typedef struct queue Queue;

Queue __queue__()
{
    Queue queue;

    queue.front = 0;
    queue.rear = -1;


    return queue;
};

void insert (Queue *queue, int item)
{
    queue->items[++queue->rear] = item;
}

int queue_is_full(Queue *queue)
{

    return queue->rear == (QUEUE_SIZE - 1);
}
void insert_and_test(Queue *queue, int item, int *queue_overflow)
{
    if (!(*queue_overflow = queue_is_full(queue)))
        queue->items[++queue->rear] = item;

}
int main ()
{
    Queue my_queue = __queue__();
    int queue_overflow;


    for (int i = 0; i < QUEUE_SIZE; i++)
    {
        insert_and_test(&my_queue, 1000, &queue_overflow);
        if (queue_overflow){
            printf("Fila cheia\n");
        }
    }
    
    for (int i = 0; i < QUEUE_SIZE; i++)
    {
        printf("Posição: %d, Valor: %d \n", i, my_queue.items[i] );
    }
    

    for (int i=0; i < QUEUE_SIZE; i++)
    {

        insert(&my_queue, i * 10 + 1);
    }

    for (int i = 0; i < QUEUE_SIZE; i++)
    {
        printf("Posição: %d, Valor: %d\n", i, my_queue.items[i]);
    }
    
    return 0;

}