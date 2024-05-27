#include<iostream>
using namespace std;
int count(int num){
    int c=0;
    while(num!=0){
        c++;
        num/=10;
    }
    return c;
}
int main(){
    int n,a=0;
    cout<<"enter your number ";
    cin>>n;
    int temp=n; 
    for(int i=1;i<=count(n);i++){
        if(i==count(temp)||i==1){
            a+=n%10;
        }
        n/=10;
    }
    cout<<a;
    return 0;
}