#include<stdio.h>
int fact(int num){
    int f=1;
    for (int i=2;i<=num;i++){
        f=f*i;
    }
    return f;
}
int combination ( int r,int n){
    int result=(fact(n)/fact(r)*fact(n-r));
    return result;
}

int main(){
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    for (int i=0;i<=num;i++){
        for (int j=0;j<=i;j++){
      int icj=combination(i,j);
          printf("%d",icj);
        }
        printf("\n");
    }
    return 0;
}