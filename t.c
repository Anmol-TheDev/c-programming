#include<stdio.h>
#include<string.h>
void main(){
   int num[10]={2,7,11,15},target=9;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(num[i]+num[j]==target){
                printf("[%d,%d]",i,j);
            }
        }
    }
}
