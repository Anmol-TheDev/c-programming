#include<stdio.h>
int fibo(int num ){
    if(num<=0) return 0;
    int a=0,b=1,sum=a+b;printf("%d",sum);
    a=b;b=sum;sum=a+b;
    fibo(num-1);
    return 0;
}
int main(){
    int num;printf("enter your number");
    scanf("%d",&num);
    fibo(num);
    return 0;
}