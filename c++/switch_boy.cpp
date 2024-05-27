#include <iostream >
using  namespace std;
int main(){
    int a,b;
    char check;
    cout << "enter your sum choice ";
    cin >> check;
    cout<<"enter tow numbers ";
    cin >> a>> b;
    switch (check)
    {
    case '+':
    cout<<a+b;
        break;
    
    case '-':
    cout <<a-b;
    break;
    
    case '*':
    cout <<a*b;
    break;

    case '/':
    cout<< a/b;
    break;
    default:
        cout<<"enter option accouding to normal arthmatic";
    } 
    return 0;
}