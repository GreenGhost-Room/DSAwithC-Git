#include <stdio.h>
#include <stdlib.h>
struct DoubleLinkList
{
    struct DoubleLinkList *prev;
    int data;
    struct DoubleLinkList *next;
};
void Display(struct DoubleLinkList *ptr);
int main(){
    struct DoubleLinkList *first,*second,*third;
    first=(struct DoubleLinkList*)malloc(sizeof(struct DoubleLinkList));
    second=(struct DoubleLinkList*)malloc(sizeof(struct DoubleLinkList));
    third=(struct DoubleLinkList*)malloc(sizeof(struct DoubleLinkList));
    first->prev=NULL;
    first->data=12;
    first->next=second;
    second->prev=first;
    second->data=13;
    second->next=third;
    third->prev=second;
    third->data=14;
    third->next=NULL;
    Display(third);


    return 0;
}
void Display(struct DoubleLinkList *ptr){
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->prev;
    }
    
}