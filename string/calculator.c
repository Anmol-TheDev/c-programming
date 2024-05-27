#include<stdio.h>
int main(){
    char value[30];
    scanf("%s",value);
    int a=0;
    for(int i=0;value[i]!='\0';i++){
        a++;
        if(value[i]/1!=value[i])
            break;
    }
    printf("%d",a);
    return 0;
}