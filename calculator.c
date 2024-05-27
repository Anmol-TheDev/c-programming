#include<stdio.h>
int add (int a ,int b){
    return (a+b);
}
int sub(int a,int b){
    return (a-b);
}
int main(){
    int a,b,result;
    char input;
    printf("ente your number ");
    scanf("%d %d",&a,&b);
    printf("\nenter your choice from this +  -  ");
    scanf("%c",&input);
    switch (input)
    {
    case'+': 
  result= add(a,b);
        break;
        
        case '-':
       result= sub(a,b);
            break;
    
    }
    printf("\n%d",result);
    return 0;
}