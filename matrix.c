#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int matris1[row][col],matris2[row][col],result[row][col];
    printf("start entring matirs elements ");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            scanf("%d",&matris1[i][j]);
        }
    }
    printf("start entring of 2nd matirs elements \n");
    for(int i=1;i<=row;i++){
         for(int j=1;j<=col;j++){
            scanf("%d",&matris2[i][j]);
        }
    }
    for(int i=1;i<=row;i++){
         for(int j=1;j<=col;j++){
            result[i][j]=matris1[i][j]+matris2[i][j];
        }
    }
    printf("the sum of your matris is  \n");
      for(int i=1;i<=row;i++){
         for(int j=1;j<=col;j++){
             printf("%d",result[i][j]);
        }
        printf("\n");
    }
return 0;
}