#include<stdio.h>
int  prime(int num,int i){
    if (num<=1){
        return 0;
    }
    if (i==1){
        return 1;
    }
    if (num%i==0){
        return 0;
    }
     prime(num,i-1);
     return;
}
int main(){

    int num;
    printf ("enter your number ");
    scanf("%d",&num);
    int result = prime(num,num/2);
    if (result==1){
        printf("your number is a prime number ");
    }
    else{
        printf("Entered number is not a prime number ");
    }
    
    return 0;
}