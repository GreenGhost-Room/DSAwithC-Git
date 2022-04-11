#include <stdio.h>
#include <stdlib.h>
struct SingleLinkList
{
    int data;
    struct SingleLinkList *next;
};
void Display(struct SingleLinkList *ptr);
int main(){
    struct SingleLinkList *first,*second,*third;
    first=(struct SingleLinkList*)malloc(sizeof(struct SingleLinkList));
    second=(struct SingleLinkList*)malloc(sizeof(struct SingleLinkList));
    third=(struct SingleLinkList*)malloc(sizeof(struct SingleLinkList));
    first->data=12;
    first->next=second;
    second->data=13;
    second->next=third;
    third->data=14;
    third->next=NULL;
    Display(first);


    return 0;
}
void Display(struct SingleLinkList *ptr){
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}

    
