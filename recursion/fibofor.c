#include<stdio.h>
int main(){
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    int a=0,b=1;
    int c=a+b;
    for (int i=1;i<=num;i++){
        c=a+b;
        a=b;
        b=c;
        printf("the number %d fibonacci is %d\n",i,a);
    }
    
    return 0;
}