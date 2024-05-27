 #include<stdio.h>
 int main(){
    int first=0,secound=0,third=0,sum=0;
    for (int i=1;i<=500;i++){
        if (i<10){
            printf("%d",i);
        }
        if (i>9&&i<100){
            first=i%10;
            first=first*first;
           secound=i/10;
           secound=secound*secound;
           first=first+secound;
           if(first==i){
            printf("%d",i);
           }
           
        }
        if (i>99&&i<=500){
            first =i%10;
            secound=i/10;
            third =secound %10;
            secound =secound/10;
            third =third +secound;
            if (third==i){
                printf("%d",i);
            }

        }
    }
    return 0;
 }