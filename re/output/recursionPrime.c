#include<stdio.h>
int prime(int num,int i){
    i=num-1;
    if(i<=1){
        return 0;
    }
    if (i==1){
        return 1;
    }
    if (num%i==0){
        return 0;
    }
    return prime(num,num/2);
}
int main(){
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    int result =prime(num,num/2);

    printf("%d",&result);

    return 0;
}
