#include<stdio.h>
int main(){
    int num;
    printf("enter the number of student ");
    scanf("%d",&num);
    int marks[num];
    for(int i=1;i<=num;i++){
        printf("enter the marks of student no. %d : ",i);
        scanf("%d\n",&marks[i]);
    }
    for(int i=4;i>=1;i--){

        if(marks[i]<35) printf("roll number %d got failed \n",i);
    }
    return 0;
}