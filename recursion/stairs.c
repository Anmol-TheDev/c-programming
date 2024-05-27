#include<stdio.h>
int stair(int num){
    if (num==0) return 1;
    if(num<=2)return num;
    return stair(num-3)+stair(num-2)+stair(num-1);
}
int main(){
    int num;
    printf("enter the number of starirs ");
    scanf("%d",&num);
    printf("%d",stair(num));
    return 0;
}