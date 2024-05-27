#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter your number ");
    scanf("%d ",&a);
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swaped a is %d\n",a);
    printf("the swaped b is %d",b);
    return 0;
}