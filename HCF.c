#include<stdio.h>
int min(int a, int b){
    if (a<b) return a;
    else return b;
}
int sum(int a,int b){
    int f;
    for (int i=1;i<=min(a,b);i++){
        if (a%i==0&&b%i==0){
        f=i;}
    }
    return f;
}
int main(){
    int a,b ;
    printf ("enter your first number ");
    scanf("%d",&a);
    printf("enter your secoud number ");
    scanf("%d",&b);
    int hcf=sum(a,b);
    printf("the hcf for your entered nubmber is %d",hcf);
    return 0;
}