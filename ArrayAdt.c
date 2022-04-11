#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct myArray *a,int tsize,int usize);
void setVal(struct myArray *a);
void show(struct myArray *a);
int  getVal(struct myArray *a);

int main(){
    struct myArray a;
    int d;
    createArray(&a,10,6);
    printf("setting the value of array\n");
    setVal(&a);
    printf("showing the value of array\n");
    show(&a);
    printf("getting the value of array\n");
    d=getVal(&a);
    printf("Array value: %d",d);


    return 0;
}
void createArray(struct myArray *a,int tsize,int usize){
    (*a).total_size=tsize;
    (*a).used_size=usize;
    (*a).ptr=(int*)malloc(tsize*sizeof(int));
}
void setVal(struct myArray *a){
    int n;
    for(int i=0;i<(*a).used_size;i++){
        scanf("%d",&n);
        (*a).ptr[i]=n;
    }
}
void show(struct myArray *a){
    for(int i=0;i<(*a).used_size;i++){
        printf("%d\n",(*a).ptr[i]);
    }
}
int getVal(struct myArray *a){
    int pos;
    printf("position: ");
    scanf("%d",&pos);
    --pos;
    return (*a).ptr[pos];
}