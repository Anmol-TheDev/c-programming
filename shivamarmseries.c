#include <stdio.h>
#include<math.h>
int main(){
    int num,a;
    printf("enter your number ");
    scanf("%d",&num);
    int count=0;
    for (int i=1;i<=num;i++){
        int a=i;
    while (i!=0){
        count++;
        i=i/10;
    }
    i=a;
    int sum=0;
    while (i!=0){
        int rem=i%10;
        int b=pow(rem,count);
        sum=sum+b;
    }
    if (sum==a){
        printf("%d",sum);
    } }

    return 0;
}