#include<iostream>
using namespace std;
class person
{
public:
   char name[30];
   int age;
   public:
    void getdata(void);
    void display(void);
};

void person::getdata(void)
{
cout<<"Please enter your name:";
cin>>name;
cout<<"Enter your age:";
cin>>age;
}

void display()
{
cout<<"\nName : "<<name;
cout<<"Age : "<<age;
}

int main(){
    person p;
    p.getdata;
    p.display;
    return(0);
}