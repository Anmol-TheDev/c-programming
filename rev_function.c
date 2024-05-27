#include<stdio.h>
int reverse(int num){

    int rev=0;
    int count=0;

    while (num!=0){
  int ls=num%10;
  rev=rev*10+ls;
  num=num/10;
  
  }

  return rev;
}
int main(){
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    int rev = reverse(num);
    printf("the reversed vslue is %d",rev);
    return 0;
}