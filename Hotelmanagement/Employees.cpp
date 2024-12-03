#include <iostream>
using namespace std;
using std::string;

class   Employee
{
public:
    string Name;
    string Hotel;
    int Age;
   
    void introduceyourself(){
        cout<<"Name "<<Name<<endl;
        cout<<"Hotel "<<Hotel<<endl;
        cout<<"Age "<<Age<<endl<<endl;
    }// this is a constructor.
    Employee (string name, string hotel, int age){
        Name=name;
        Hotel=hotel;
        Age=age;
    }
};

int main(){

    Employee employee1 = Employee ("Favour","Five star",21);
    employee1.introduceyourself();
    Employee employee2 = Employee ("Prosper","FFH",19);
    employee2.introduceyourself();
    Employee employee3 = Employee ("Mike","La falaise",19);
    employee3.introduceyourself();
    


return 0;
}
