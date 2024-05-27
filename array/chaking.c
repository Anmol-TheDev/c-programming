#include<stdio.h>
#include<stdbool.h>
int main(){
    int num,x;
    bool a=false;
    printf("enter the size of array ");
    scanf("%d",&num);
    printf("enter the target ");
    scanf("%d",&x);
    int arr[num],b;
    printf("start entering elements of array ");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        if(arr[i]==x){
            a=true;
    b=i;
        }
    }
    if(a==true) printf("the number exiest in array and this value is on indux number %d ",b);
    else printf("this number not exiest in array ");
    return 0;
}