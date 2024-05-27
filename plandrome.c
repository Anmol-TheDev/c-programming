#include<stdio.h>
 int main(){
    int num,a;
    printf("enter your number : ");
    scanf("%d",&num);
    a=num;
    int sum=0,rem,rev=0;
    while (num!=0){
        rem=num%10;
        sum=sum+rem;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("the sum of your number is %d\n",sum);
    printf("the reversed value is %d\n",rev);

    if (rev==a){
        printf("the entered number is a plandrome ");

    }
    else printf("the entered value is not a plandrome \n Try with other value ");
    
    return 0;
 }