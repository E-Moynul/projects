///IT-23017
#include<stdio.h>

int isEmpty(int front)///FUNCTION TO CHECK IF QUEUE IS EMPTY OR NOT
{
    if(front==-1)///QUEUE HAS NOT ELEMENT SO FRONT=-1
    {
        return 1 ;
    }
    return 0 ;
}

int isFull(int rear,int size)///FUNCTION TO CHECK IF QUEUE IS FULL OR NOT
{
    if(rear==size-1)///LAST ELEMENT==SIZE-1
    {
        return 1 ;
    }
    return 0 ;
}

void Peek(int *queue,int *front)///FUNCTION TO CHECK THE FRONT ELEMENT OF QUEUE
{
    if(isEmpty(*front))
    {
        printf("Queue is empty , no element to peek .\n\n") ;
        return ;
    }
    printf("Front element : %d\n\n",queue[*front]) ;
    return ;
}

void Dequeue(int *queue,int *front,int *rear)///DEQUEUE FUNCTION
{
    if(isEmpty(*front))
    {
        printf("Queue is empty , no element can be dequeued .\n\n") ;
        return ;
    }
    int value=queue[*front] ;
    (*front)++ ;///INCREASING THE INDEX SO THE FRONT ELEMENT IS DISCARDED
    if(*front>*rear)/// // If front passes rear, reset the queue
    {
        (*front)=-1 ;
        (*rear)=-1 ;
    }
    printf("Dequeued element : %d .\n\n",value) ;
    return ;
}

void Enqueue(int *queue,int size,int *front,int *rear)///ENQUEUE FUNCTION
{
    if(isFull(*rear,size))
    {
        printf("Queue is full , no more elements can be added .\n\n") ;
        return ;
    }
    int value ;
    printf("Enter value to enqueue : \n") ;
    scanf("%d",&value) ;
    if((*front)==-1)(*front)++ ;///ASSIGNING STARTING INDEX TO FRONT
    (*rear)++ ;
    queue[(*rear)]=value ;///ENQUEUE THE GIVEN VALUE TO QUEUE
    printf("%d enqueued to the queue .\n\n",value) ;
    return ;
}

int main ()
{
    int size,choice,front=-1,rear=-1 ;///FRONT=-1 & REAR=-1 TO POINT THAT THE QUEUE IS CURRENTLY EMPTY

    while(1)///TAKING INPUT OF THE SIZE OF THE QUEUE
    {
        printf("\nEnter the required size of the queue :\n") ;
        scanf("%d",&size) ;
        if(size<=0)
        {
            printf("Invalid size\n") ;///SIZE MUST BE GREATER THAN 0
        }
        else
        {
            break ;
        }
    }

    int queue[size] ;///ARRAY FOR THE QUEUE

    while(1)///MENU
    {
        printf("Queue Operations :\n") ;
        printf("1. Enqueue\n") ;
        printf("2. Dequeue\n") ;
        printf("3. Peek\n") ;
        printf("4. isEmpty\n") ;
        printf("5. isFull\n") ;
        printf("6. Exit\n\n") ;
        scanf("%d",&choice) ;
        if(choice==1)
        {
            Enqueue(queue,size,&front,&rear) ;
        }
        else if(choice==2)
        {
            Dequeue(queue,&front,&rear) ;
        }
        else if(choice==3)
        {
            Peek(queue,&front) ;
        }
        else if(choice==4)
        {
            if(isEmpty(front))
            {
                printf("Queue is empty .\n\n") ;
            }
            else
            {
                printf("Queue is not empty .\n\n") ;
            }
        }
        else if(choice==5)
        {
            if(isFull(rear,size))
            {
                printf("Queue is full .\n\n") ;
            }
            else
            {
                printf("Queue is not full .\n\n") ;
            }
        }
        else if(choice==6)
        {
            return 0 ;
        }
        else
        {
            printf("Invalid choice\n") ;
        }
    }
}
