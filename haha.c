#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            for(int c=1;c<=j;c++){
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}