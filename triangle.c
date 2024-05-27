#include<stdio.h>
  int main(){
    int num;
    printf("enter your number ");
     scanf("%d",&num);
       for (int i=num;i>0;i--){
        for(int j=1;j<=i;j++){
          printf("*");
        }
         printf("\n");
     }
    return 0;
}