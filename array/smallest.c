#include<stdio.h>
int main(){
    int num;
    printf("enter the size of array : ");
    scanf("%d",&num);
    int arr[num],big=100000;
    printf("start entering elements of array\n");
    for(int i=1;i<=num;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<big) big=arr[i];
    }
    printf("the smallesst number in array is %d",big);
    return 0;
}