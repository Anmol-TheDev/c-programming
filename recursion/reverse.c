#include<stdio.h>
int main(){
    int num;
    printf("enter your number  ");
    scanf("%d",&num);
   rev(num);
}
int rev(int num){
    if (num<=0) return;
    int a;
    a=num%10;
    printf("%d",a);
    rev(num/10);
    return 0;
}