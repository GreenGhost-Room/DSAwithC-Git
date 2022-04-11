#include <stdio.h>
void Display(int arr[],int size);
int  insertion(int arr[],int size,int index,int num);
int main(){
    int index=2,num=67,size=6;
    int arr[20]={5,6,23,88,23};
    Display(arr,size);
    insertion(arr,size,index,num);
    size+=1;
    Display(arr,size);
    return 0;
}
void Display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");

}
int insertion(int arr[],int size,int index,int num){
    for (int  i =size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=num;
    
    return 1;
}