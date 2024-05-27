#include<stdio.h>
int maze(int a,int b,int r,int c){
int right=0,down=0,total;
if(a==r&&b==c) return 1;
if(a==r){
    right+=maze(a,b+1,r,c);
}
if(b==c){
    down+=maze(a+1,b,r,c);
}
if(a<r&&b<c){
    right+=maze(a,b+1,r,c);
    down=maze(a+1,b,r,c);
}
total =right + down;
return total;
}
int main(){
    int row,col;
    printf("enter the number of row");
    scanf("%d",&row);
    printf("enter the numbr of col");
    scanf("%d",&col);
    int result=maze(1,1,row,col);
    printf("the total ways is %d",result);
    return 0;
    } 