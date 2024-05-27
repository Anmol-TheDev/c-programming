#include<stdio.h>
int main(){
    int num;
    printf("enter the size of array");
    scanf("%d",&num);
    int arr[num];
    printf("start entering the elements of array\n");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);}
    printf("the changed value looks like this\n");
    for(int i=0;i<num;i++){
        if(i%2==0) arr[i]=arr[i]+=10;
        else arr[i]*=2;
        printf("%d\n",arr[i]);
    }
    return 0;
}