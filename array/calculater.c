#include<stdio.h>
void  add(int a,int x,int b){
    printf("%d %c %d = %d",a,x,b,a+b);
}
void  sub(int a,int x,int b){
    printf("%d %c %d = %d",a,x,b,a-b);
}
void mul(int a,int x,int b){
    printf("%d %c %d = %d",a,x,b,a*b);
}
void  div(int a,int x,int b){
    if(b==0){
        printf("enter a valid divisor ");
    }
    else printf("%d %c %d = %d",a,x,b,a/b);
}
int main(){
    int a,b;
    char x;
    printf(" enter the expression \n");
    scanf("%d %c %d",&a,&x,&b);

    switch (x)
    {
    case '+':
        add(a,x,b);
        break;

    case '-':
     sub(a,x,b);
     break;
    
    case '*':
    mul(a,x,b);
    break;

    case '/':
     div(a,x,b);
    default:
      break;
    }
    return 0;
}