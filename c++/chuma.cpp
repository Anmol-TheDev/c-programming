#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter your number ";
    cin>>a>>b>>c;
    if(a<b){
        a=b;
    }
    if(a<c){
        a=c;
    }
    cout<< a <<" is largest number"<<endl;
    if(b>a){
        b=a;
    }
    if(b>c){
        b=c;
    }
    cout << a <<"is largest number";
    return 0;
}