#include<stdio.h>
int main(){
    int num;
    printf("etner the size of array ");
    scanf("%d",&num);
    int sum=1,arr[num];
    printf("start entering the element in array");
    for(int i=1;i<=num;i++){
        scanf("%d",&arr[i]);
        sum*=arr[i];
    }
    printf("the product of array is %d",sum);
    return 0;

}