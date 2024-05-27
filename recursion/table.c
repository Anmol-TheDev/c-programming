#include<stdio.h>
int table (int num,int x){
    if(x>10){printf("\n");return 0;}
    printf("%d\t",num*x);
    table( num ,x+1);
}
int main(){
    int num;
    printf("enter your numbere");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
    table(i,1);}
    return 0;
}