#include<stdio.h>
int main(){
    int num;printf("enter the size of array ");
    scanf("%d",&num);
    int arr[num];
    printf("start entering velue in array \n");
    int odd=0,even=0;
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
        if(i%2==0) even=+arr[i];
        else odd=+arr[i];
    }
    printf("the sum is %d\t",odd-even);
    return 0;
}