#include <stdio.h>
int zigzag(int num){
    if(num==0) return 0;
    printf("%d ",num);
    zigzag(num-1);
     printf("%d ",num);
     zigzag(num-1);
      printf("%d ",num);
}
int main(){
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    zigzag(num);
    return 0;
}