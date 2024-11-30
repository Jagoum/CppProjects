#include <iostream>
using std::string;
using namespace std;
int main()
{
    // Declaring varaibles
    string name;
    int form;//consideren classes to be from one to seven(1-7) to represent form 1 to upersixth.
    int age;
    float average;

    cout<<"Hello Welcome to this my application please can you enter your infos \n\n";// This will print to the screen what ever is in the quotes. It is similar to printf in c
    //this will accept the name and assign it to the variable name. similar scanf("%s",&name); in  c
    cout<<"Name : ";
    cin>>name;
    cout<<"Age : ";
    cin>>age;
    cout<<"Class Format [1 - 7 for form 1 to uppersixth] : ";
    cin>>form;
    cout<<"Enter your first term average : ";
    cin>>average;
     cout<<"Hello Mr "<<name<<" Here are your statistics \n\n";
    //This will display each info in a new line 
    cout<<"Name : "<<name<<"\nClass form : "<<form<<"\nAge : "<<age<<"\nAverage : "<<average<<endl;
    // this will check if a student is in high school
  if(form>5){
    cout<<"Hello "<<name<<" you are in highschool !\n\n ";
    if(age<16)// this one checks if the person is older than 16
    cout<<"sorry "<<name<<" but you are too young to write this exams please remain in high school until you are eligible";
    else{//this one checks if the person has atleast 9.5 average 
        if(average>9.49999)
    cout<<"Nice "<<name<<" you are eligible For this GCE A level\n\n";
    else
    cout<<"Sorry "<<name<<" but your average is not what we wanted.\n So you have been rejected. Prepare well next time\n";

    }
   
  }
  else
  cout<<"sorry "<<name<<" but you are not allowed to use to write advance level but you need to write ordinary level instead.";
return 0;
}
