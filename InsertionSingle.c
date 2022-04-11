#include <stdio.h>
#include <stdlib.h>
struct SingleLinkList
{
    int data;
    struct SingleLinkList *next;
};
void Display(struct SingleLinkList *ptr);
struct SingleLinkList* insertAtFirst(struct SingleLinkList *head,int data);
struct SingleLinkList* insertAtLast(struct SingleLinkList *head,int data);
struct SingleLinkList* insertAtBetween(struct SingleLinkList *head,int data,int index);
struct SingleLinkList* insertAfterNode(struct SingleLinkList *head,struct SingleLinkList *prevNode,int data);



int main(){ 
    struct SingleLinkList *first,*second,*third,*fourth;
    first=(struct SingleLinkList*)malloc(sizeof(struct SingleLinkList));
    second=(struct SingleLinkList*)malloc(sizeof(struct SingleLinkList));
    third=(struct SingleLinkList*)malloc(sizeof(struct SingleLinkList));
    fourth=(struct SingleLinkList*)malloc(sizeof(struct SingleLinkList));
    first->data=12;
    first->next=second;
    second->data=13;
    second->next=third;
    third->data=14;
    third->next=fourth;
    fourth->data=15;
    fourth->next=NULL;
    Display(first);
  //   insertAtFirst
    first=insertAtFirst(first,11);
    Display(first);
  // insert at last
    first=insertAtLast(first,15);
    Display(first);
 //    insert at between
    first=insertAtBetween(first,9,1);
    Display(first);
 //   insert after node   
    first=insertAfterNode(first,second,45);
    Display(first);



    return 0;
}
void Display(struct SingleLinkList *ptr){
    while (ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    
}
struct SingleLinkList* insertAtFirst(struct SingleLinkList *head,int data){
    struct SingleLinkList *ptr;
    ptr=(struct SingleLinkList*)malloc(sizeof(struct SingleLinkList));
    ptr->data=data;
    ptr->next=head;
    return ptr;
    
}
struct SingleLinkList* insertAtLast(struct SingleLinkList *head,int data){
    struct SingleLinkList *last;
    last=(struct SingleLinkList*)malloc(sizeof(struct SingleLinkList));
     struct SingleLinkList *p=head;
     while (p->next!=NULL)
     {
         p=p->next;
     }
     last->data=data;
     p->next=last;
     last->next=NULL;
     return head;

     

}
struct SingleLinkList* insertAtBetween(struct SingleLinkList *head,int data,int index){
  struct SingleLinkList *ptr;
  ptr=(struct SingleLinkList*)malloc(sizeof(struct SingleLinkList));
  struct SingleLinkList *p=head;
  int i=0;
  while (i!=index-1)
  {
      p=p->next;
      i++;
  }
  ptr->data=data;
  ptr->next=p->next;
  p->next=ptr;
  return head;
  

}
struct SingleLinkList* insertAfterNode(struct SingleLinkList *head,struct SingleLinkList *prevNode,int data){
  struct SingleLinkList *ptr;
  ptr=(struct SingleLinkList*)malloc(sizeof(struct SingleLinkList));
  ptr->data=data;
  ptr->next=prevNode->next;
  prevNode->next=ptr;
  
  
  return head;
    
}


