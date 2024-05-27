#include<stdio.h>
int sum(int n){
    if (n==1||n==0){
        return 1;}
        int s=n+sum(n-1);
        return s;
}
int main(){
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    int a=sum(num);
    printf("the sum of number %d",a);
}
