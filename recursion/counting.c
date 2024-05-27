#include<stdio.h>
int count(int num){
    if (num==0){
        return;
    }
    printf("%d\n",num);
     count(num-1);
     return;
}
int main(){
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    int a=count(num);
    printf("%d",a);
   
    return 0;
}