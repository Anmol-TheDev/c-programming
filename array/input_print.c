#include<stdio.h>
int main(){
    int arr[10];
    for(int i=1;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=4;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    return 0;
}