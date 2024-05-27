#include<stdio.h>
#include<stdbool.h>
int main(){
    bool b=false;
    int num;
    printf("enter your number ");
    scanf("%d",&num);
    int arr[num];
    printf("start entering elements of array ");
    for(int i=0 ;i<num;i++){
    scanf("%d",&arr[i]);}
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            
    }
    if(b==true){
        printf("a dublicate element is present in array ");
    }
    else printf("no dublicate element is present in array ");
    return 0;
}