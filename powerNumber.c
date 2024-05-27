#include<stdio.h>
int main(){
    int num ;
    printf("enter your number ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        printf("%d^10 = %d\n", i, i * i * i * i * i * i * i * i * i * i);
    }
    return 0;
}