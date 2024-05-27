#include<stdio.h>
int main (){
    int n,m;
    printf("enter your number ");
    scanf("%d %d",&n,&m);
    for (int i =1;i<=n;i++){
        printf("*");
        for (int j=1;j<=m;j++){
            printf(" ");
        }
        printf("\n");
        }
    return 0;
}