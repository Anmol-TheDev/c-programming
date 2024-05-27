#include<iostream>
using namespace std;
class student {
    int roll; char name[15]; float fee;
    public:
    student();
    void display();
};
student::student(){
    cout<<"Enter the roll number of student";
    cin>>roll;
    cout<<"Enter the name of student";
    cin>>name;
    cout<<"Enter the fee of student";
    cin>>fee;
}
void student:: display(){
    cout<<endl<<roll<<endl<<name<<endl<<fee;
}


int main(){
    student s;
    s.display();
    return 0;
}