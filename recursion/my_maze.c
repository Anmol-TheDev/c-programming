#include<stdio.h>
int maze(int r,int c) {
    int right=0,down=0;
    if(r==1&&c==1) return 1;
    if(r==1) return  right+=maze(r,c-1);
    if(c==1) return  down+=maze(r-1,c);
   return maze(r,c-1)+maze(r-1,c);
   }
int main(){
    int row,col;
    printf("enter the number of row");
    scanf("%d",&row);
    printf("enter the numbr of column");
    scanf("%d",&col);
    printf("the total ways to go is %d",maze(row,col));
    return 0;
} 
