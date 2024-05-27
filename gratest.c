#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter your number ");
    scanf("%d %d %d",&a ,&b ,&c);
    if (a>b&&a>c){
        printf("the gratest number from entered value is %d",a);
    }
    else if (b>a&&b>c){
         printf("the gratest number from entered value is %d",b);
    }
    else {
         printf("the gratest number from entered value is %d",c);
    }
    return 0;
}