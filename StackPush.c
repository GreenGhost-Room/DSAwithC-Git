#include <stdio.h>
#include <stdlib.h>
#define Maxsize 10

void Push();
int Pop();
void Traversal();
int Stack[Maxsize];
int Top = -1;
int main()
{
    int choice;
    char ch;
    do
    {
        printf("\n Insertion by chice 1");
        printf("\n Deletion by 2");
        printf("\n Traversal by 3");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Push();
            break;
        
        case 2:
             printf("deleted from stack\n: %d",Pop());
             break;
        case 3:
             Traversal();
             break;

        default:
            printf("wrong choice");
            break;
        }
       
        
       
        
        
      
        
        printf("\nDo You want to continue (Y/y)");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch=='Y' || ch=='y');

    return 0;
}
void Push()
{
    int item;
    if (Top == Maxsize - 1)
    {
        printf("Stack is overflow");
        exit(0);
    }
    else
    {
        printf("Enter element to be push: ");
        scanf("%d", &item);
        Top = Top + 1;
        Stack[Top] = item;
    }
}
int Pop()
{
    int item;
    if (Top == -1)
    {
        printf("Stack is empty");
        exit(0);
    }
    else
    {
        item = Stack[Top];
        Top = Top - 1;
    }
    return (item);
}
void Traversal()
{
    
        for (int i = Top; i >= 0; i--)
        {
            printf(" \n%d", Stack[i]);
        }
    
}