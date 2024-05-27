#include<stdio.h>
int main(){
    int n,i;
    float num[100],sum=0.0,avg;

    printf("enter your number ");
    scanf("%d",&n);
    while (n>100||n<1){
        printf("re enter the number ");
        scanf("%d",&n);

    }

    for (int i=0; i<n; ++i){
        printf("enter your number ",i+1);
        scanf("%f",&num[i]);
        sum+=num[i];
    }
    avg=sum/n;
    printf("%.2f",avg);
    return 0;
}