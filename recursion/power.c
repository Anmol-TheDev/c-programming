#include<stdio.h>
int power(int a ,int b){
    if(b==1) return a;
    int t=power(a,b/2);
    if(b%2==0){
        return t*t;
    }
    else return t*t*a;
}
int main(){
int num,p;
printf("enter your number ");
scanf("%d",&num);
printf("ente the power of number ");
scanf("%d",&p);
printf("the power of number is %d",power(num,p));
    return 0;
}