#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,2,3},num=0;
    for(int i=0;i<3;i++){
    num^=arr[i];
    }
    cout<<num;
    return 0;
}