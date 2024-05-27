#include<stdio.h>
int main(){
int num,fst=0,sec=1;
int thrd=fst+sec;
printf("enter your number ");
scanf("%d",num);
printf("%d %d",fst,sec);

for (int i=1;i<=num;i++){
    printf("%d",thrd);
    fst=sec;
    sec=thrd;
    thrd=fst+sec;
    
}
    return 0;
}