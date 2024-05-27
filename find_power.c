#include<stdio.h>
int main(){
    int num,power,temp;
    printf("eter your number ");
    scanf("%d",&num);
    temp=num;
    printf("enter the power of your number ");
    scanf("%d",&power);
    for (int i=2;i<=power;i++){
        num=num*temp;
    }
    printf("%d",num);
    return 0;
}