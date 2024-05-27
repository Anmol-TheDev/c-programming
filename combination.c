#include<stdio.h>
int fact(int num){
    int f=1;
    for (int i=2;i<=num;i++){
        f=f*i;
    }
    return f;
}

int main(){
int n,r;
printf("enter the value ");
scanf("%d %d",&n,&r);
int rfact=fact(r);
int nfact=fact(n);
int nrfact=fact(n-r);

int ncr=nfact/(rfact*nrfact);
printf("the combination value of dntered value is : %d",ncr);

    return 0;
}