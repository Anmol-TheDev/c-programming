#include<stdio.h>
int main(){
    int a=5;
    printf("%p\n",&a);
    int*x =&a;
    printf("%u",x);
    return 0;
}