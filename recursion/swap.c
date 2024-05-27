#include<stdio.h>
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    int arr[num],a;
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    a=num-1;
    for(int i=0;i<num/2;i++){
         int x=arr[a-i];
        arr[a-i]=arr[i];      
        arr[i]=x;
    }
    for(int i=0;i<num;i++){
        printf("%d,",arr[i]);
    }
    return 0;}