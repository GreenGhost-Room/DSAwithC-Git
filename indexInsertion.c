#include <stdio.h>
int search(int arr[],int n,int num);
int  insertion(int arr[],int n,int num,int index);
void Display(int arr[],int n);
int main(){
    int num=25,n=9,index;
    int arr[20]={2,7,10,15,20,30,45,67};
    index=search(arr,n,num);
    insertion(arr,n,num,index+1);
    n+=1;
    Display(arr,n);
    
    
    return 0;
}
int search(int arr[],int n,int num){
    static int i=0;
    for(i=0;i<n;i++){
        if(num>arr[i]&&num<arr[i+1]){
            printf("%d\n",i);
            break;
        }
       
    }
    return i;

}
int insertion(int arr[],int n,int num,int index){
    for (int i =n-1; i>=index;i--)
    {
       arr[i+1]=arr[i];
    }
    arr[index]=num;
    return 0;
    
}
void Display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
      printf("%d ",arr[i]);
    }
    printf("\n");
    
}