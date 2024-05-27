#include<stdio.h>
int count(int num){
    if(num==0){
        return 0;
    }
    printf("%d\n",num);
    count(num-1);
    printf("%d\n",num);
}

int main(){
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    count(num);
    return 0;
}