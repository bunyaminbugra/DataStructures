#include <stdio.h>
#include <stdlib.h>

struct  node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

int enqueue(int data)
{
    /* Queue is empty */
    if (front == NULL)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        front = rear = new;
    }
    else
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        rear->next = new;
        rear = new;
    }
    
}

/* Dequeue */
int dequeue()
{
    if (front == NULL)
    {
        printf("Queue is empty!");
        return -1;
    }

    struct node *temp = front;

    front = front->next;

    free(temp);

    return 0;
}

/* Display Queue*/
int display()
{
    if (front == NULL)
    {
        printf("Queue is empty!");
        return -1;
    }
    
    struct node *index = front;

    printf("Queue: ");
    while (index != NULL)
    {
        printf(" %d -", index->data);
        index = index->next;
    }
    
    printf("\n");

    return 0;
}

int main()
{

    enqueue(8);
    enqueue(5);
    enqueue(6);
    enqueue(3);

    display();

    dequeue();

    display();

    enqueue(33);

    display();

    return 0;
}