#include<stdio.h>
#include<math.h>
int main(){
    int num,count=0,sum=0;
    printf("enter your number ");
    scanf("%d",&num);

    while (num!=0){
        int a=num%10;
        int result=pow(2, count);result=result*a;
        int sum=sum+result;
        count++;
        num=num/10;
    }
    printf("the digit form of your binary number is %d",sum);
    return 0;

}