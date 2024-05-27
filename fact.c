#include <stdio.h>
int factorial (int num){
    if (num==1)
    return 1;
    return num*factorial(num-1);
}
int fact(int num) {
    int f=1;
    for (int i=1;i<=num;i++) {
        f=f*i;
    }
    return f;
}
int main() {
    int num,a,sum;
    printf("simple loop factorial type 1\n\n recursion factorial type 2\n\n");
    scanf("%d",&a);

    printf("Enter the number whose factorial you want: ");
    scanf("%d", &num); 
    if(a==1){
    sum = fact(num);
    printf("The factorial of your entered number is %d", sum);}
    else {
        sum=factorial(num);
        printf("The factorial of your entered number is %d ",sum);
    }
    return 0;
}