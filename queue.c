#include <stdio.h>
#define Maxsize 10
int queue[Maxsize];
int front = 0, rear = -1;
void insert();
int delete ();
void traversal();
int main()
{
    int choice;
    char ch;
    do
    {

        printf("  1 for insertion\n");
        printf("  2 for delete\n");
        printf("  3 for traversal\n");
        printf("enter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;

        case 2:
            printf("delete element: %d\n", delete ());
            break;
        case 3:
            traversal();
            break;
        default:
            printf("\n you entred wrong choice\n");
            break;
        }
        printf("do you to continue(Y)for yes (N) for No\n");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch == 'Y' || ch == 'y');

    return 0;
}
void insert()
{
    int item;
    if (rear >= Maxsize)
    {
        printf("queue is overflow");
    }
    else
    {
        printf("enter the element to be inserted:\n");
        scanf("%d: ", &item);
        rear = rear + 1;
        queue[rear] = item;
    }
}
int delete ()
{
    int item;
    if (front < 0)
    {
        printf("queue is empty");
    }
    else
    {
        item = queue[front];
        front = front + 1;
    }
    return (item);
}
void traversal()
{
    if (front == -1)
    {
        printf("queue is empty");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}