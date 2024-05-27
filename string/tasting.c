#include<stdio.h>
void  add(int a,int x,int b){
    printf("Output is \n %d %c %d = %d",a,x,b,a+b);
}
void sub(int a,int x,int b){
    printf("Output is \n %d %c %d = %d",a,x,b,a-b);
}
void mul(int a,int x,int b){
    printf("Output is \n %d %c %d = %d",a,x,b,a*b);
}
void div(float a,int x,float b){
    if(b==0){
        printf("enter a valid divisor ");
    }
    else printf("Output is \n %f %c %f = %d",a,x,b,a/b);
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