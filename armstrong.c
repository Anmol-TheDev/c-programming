#include<stdio.h>
#include<math.h>

int count(int num){
    int co=0;
    while (num!=0){
        co++;
        num=num/10;
    }
    return co;
}

int arm(int n){
    int a=n;
    int co=count(n),sum=0;
    while(n!=0){
        int rev=n%10;
        sum=sum+pow(rev,co);
        n=n/10;
    }
    return (sum==a);
}

int loop(int nu){

    for (int i=1;i<=nu;i++){
        if (arm(i)){
            printf("%d\t",i);
        }
    }
    printf("\n");
}

int main(){
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    loop(num);
    return 0;
}

