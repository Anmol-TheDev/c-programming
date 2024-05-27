#include<stdio.h>
void sum(int num,int s){
    if (num==0){
        printf("%d",s);
    }
    sum(num-1,s+num);
}
int main(){
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    sum(num,0);
    return 0;
}
