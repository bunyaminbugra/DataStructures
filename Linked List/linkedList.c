#include <stdio.h>
#include <stdlib.h>

/* Linked List */
struct node
{
    int data;
    struct node *next;
};

/* Head & Tail*/
struct node *head = NULL;
struct node *tail = NULL;

/* Add data to node */
int addNode(int data)
{
    /* Linked List is empty */
    if (head == NULL)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        head = tail = new;
    }
    /* Linked List isn't empty and add an element to the end of the list */
    else
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        tail->next = new;
        tail = new;
    }
    

    return 1;
}

/* Add node to head */
int addNodeHead(int data)
{
    /* Linked List is empty */
    if (head == NULL)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        head = tail = new;
    }
    /* Linked List is empty and add new data to head*/
    else
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = head;

        head = new;
    }
    
    return 1;
}

/* Print node */
int printNode()
{
    struct node *index = head;

    while (index != NULL)
    {
        printf("%d - ",index->data);

        index = index->next;
    }

    printf("\n");

    return 1;
}

int deleteNode(int data)
{
    struct node *prev = NULL;
    struct node *index = head;

    /* Linked List is empty*/
    if (head == NULL)
    {
        printf("Linked List is empty\n");
        return 1;
    }

    /* Head */
    if (head->data == data)
    {
        struct node *t = head;

        head = head->next;
        free(t);
        return 1;
    }
    
    while (index != NULL && index->data != data)
    {
        prev = index;
        index = index->next;
    }
    
    if (index == NULL)
    {
        printf("Data not Found");
        return -1;
    }
    
    prev->next = index->next;

    if (tail->data == data)
    {
        tail = prev;
    }
    
    free(index);
    

    return 1;
}

int main()
{
    addNode(10);
    addNode(9);
    addNode(45);
    addNode(55);

    addNodeHead(2);

    printNode();

    addNodeHead(9);

    printNode();

    deleteNode(9);

    printNode();

    deleteNode(9);

    printNode();

    deleteNode(55);

    printNode();

    addNode(5);

    printNode();

    return 0;
}
