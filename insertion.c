#include <stdio.h>
#include <stdlib.h>
int a[100];
void insert(int a[],int len,int num,int pos);
int main(){
    int len,num,pos;
    printf("length of array: ");
    scanf("%d",&len);
    printf("enters the integer:\n");
    for(int i=0;i<len-1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the integers to be inserted");
    scanf("%d",&num);
    printf("enter the position where number will be inserted");
    scanf("%d",&pos);
    --pos;
    insert(a,len,num,pos);
    return 0;
}
void insert(int a[],int len,int num,int pos){
    for(int i=len;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=num;
    if(pos>len){
        printf("insertion outside the arrray");
    }
    len++;
    printf("new array");
    for(int i=0;i<len;i++){
        printf("%d\n",a[i]);
    }
}