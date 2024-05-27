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
    int original_n = n; // make a copy of the original number
    a=n%10;
    for(int i=1;i<=count(original_n);i++){
        n/=10;
        if(i==count(original_n)){
            a+=n%10;
        }
    }
    cout<<a;
    return 0;
}