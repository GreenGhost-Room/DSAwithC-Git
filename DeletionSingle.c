#include <stdio.h>
#include <stdlib.h>
struct SingleLinkList
{
    int data;
    struct SingleLinkList *next;
};
void Display(struct SingleLinkList *ptr);
struct SingleLinkList* deleteAtFirst(struct SingleLinkList *head);
struct SingleLinkList* deleteAtLast(struct SingleLinkList *head);
struct SingleLinkList* deleteAtIndex(struct SingleLinkList *head,int index);
struct SingleLinkList* deleteAtValue(struct SingleLinkList *head,int value);



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
    //delete first
  //  first=deleteAtFirst(first);
  //  Display(first);
    //delete at last
 //  first=deleteAtLast(first);
 //   Display(first);
    // delete at index
 //  first=deleteAtIndex(first,2);
 //   Display(first);
    //delete at value
    first=deleteAtValue(first,13);
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
struct SingleLinkList* deleteAtFirst(struct SingleLinkList *head){
   struct SingleLinkList *ptr=head;
   head=head->next;
   free(ptr);
   return head; 
}
struct SingleLinkList* deleteAtLast(struct SingleLinkList *head){
    struct SingleLinkList *p=head;
    struct SingleLinkList *q=head->next;
    while (q->next!=NULL)
    {
       p=p->next;
       q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
struct SingleLinkList* deleteAtIndex(struct SingleLinkList *head,int index){
    struct SingleLinkList *p=head;
     struct SingleLinkList *q=head->next;
     for (int i = 0; i < index-1; i++)
     {
         p=p->next;
         q=q->next;

     }
     p->next=q->next;
     free(q);
     return head;
     


}
struct SingleLinkList* deleteAtValue(struct SingleLinkList *head,int value){
     struct SingleLinkList *p=head;
     struct SingleLinkList *q=head->next;
     while (q->data!=value&&q->next!=NULL)
     {
        p=p->next;
        q=q->next;

     }
     if(q->data==value){
         p->next=q->next;
         free(q);

     }
     return head;
     

}

