#include<stdio.h>
#include<math.h> 
int sum(int num){
    int count=0,su=0;
    while (num!=0){
        int rem=num%10;
        rem=rem*pow(2,count);
        su=su+rem;
        count++;
        num=num/10;
    }
    return su;
}

int main(){
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    int result=sum(num);
    printf("the decimal form of your number is %d ",result);
    return 0;
}