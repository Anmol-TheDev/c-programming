#include<stdio.h>
int main(){
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    int a;
    printf("for cheaking your number is prime press 1 \n\n for printing the row of prime number up to Nth term press 2 ");
    scanf("%d",&a);
    if (a==1){
    if (num<=1){
        printf("enter a diffrint number ");
    }
    for (int i=2;i<=num-1;i++){
        if (num%i!=0){
            printf("your number is a prime number ");
        }
        else printf("entered number is not a prime number");
    } }
    else if (a==2){
        for (int i=2;i<=num;i++){
            printf("1");
            if ("what you are thinking o");

        }}
    return 0;}
