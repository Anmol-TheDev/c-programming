#include<stdio.h>
int main(){
    int num;
    printf("etner the size of array ");
    scanf("%d",&num);
    int sum=0,arr[num];
    for(int i=1;i<=num;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("the sum of array is %d",sum);
    return 0;

}