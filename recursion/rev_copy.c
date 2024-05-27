#include<stdio.h>
void main(){
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    int arr[num],rev[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
          int a=0;
    for(int i=num-1;i>=0;i--){
        rev[a]=arr[i];
    printf("%d,",rev[a]);        
        a++;
    }
}