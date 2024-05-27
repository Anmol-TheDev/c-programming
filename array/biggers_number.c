#include<stdio.h>
int main(){
    int arr[5]={-10,-20,-30,-40,-50};
    int big;
    for(int i=0;i<5;i++){
        if(i==0){
            big=arr[i];
        }
        else if(big<arr[i]){
            big=arr[i];
        }
    }
    printf("the biggest number is %d",big);
    return 0;

}