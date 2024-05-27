#include<stdio.h>
int main(){
    int row=2,col=2;
    int matris[row][col],matris1[row][col];
    int result[row][col];
    printf("enter the value of first matris\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            scanf("%d",&matris[i][j]);
        }
    }
    printf("enter the value of secound matris\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            scanf("%d",&matris1[i][j]);
        }
    }
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            result[i][j]=matris[i][j]+matris1[i][j];
        }
    }
    printf("the sum of your bothe matris is\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            printf("%d",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}