#include<stdio.h>
int fibo(int num){
    if(num<=2) return 1;
    return fibo(num-1)+fibo(num-2);
}
int main(){
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    printf("%d",fibo(num));
    return 0;
}