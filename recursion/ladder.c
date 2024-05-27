// #include<stdio.h>
// int main(){
//     int num;
//     printf("enter your number ");
//     scanf("%d",&num);
//     int a=0;
//     while (num!=0){
//     if(num%2==0) a+= 1;
//     if(num%2!=0) a+=3;
//     num-=1;}
//     printf("the totel step you have to take is  %d",a);
//     return 0;
// }
// #include<stdio.h>
// int ladder(int num){
//     static int a=0;
//     if(num==0) return 0;
//     if(num%2==0) a+=1;
//     if(num%2!=0)  a+=3; ladder(num-1);
//     return a;}
// int main(){
//     int num;
//     printf("enter your number ");
//     scanf("%d",&num);
//     printf("the totel step you have to take is %d",ladder(num));
//     return 0;}
#include<stdio.h>
int ladder(int num,int* a){
    if(num==0) return 0;
    if(num%2==0){ (*a)+=1;ladder(num-1,a);}
    else{(*a)+=3;ladder(num-1,a);}
}
int main(){
    int num,a=0;
    int* x=&a;
    printf("enter your number");
    scanf("%d",&num);
    ladder(num,x);
    printf("the totel steps you have to take is %d",a);
    return 0;
}