#include<stdio.h>
#include<math.h>
int main(){
    int num,power;
    printf("enter your number \n");
    scanf("%d",&num);
    printf("enter the power of your number \n");
    scanf("%d",&power);
    int result=pow(num,power);
    printf("the calculated value of yor number is %d",result);
    return 0;
}