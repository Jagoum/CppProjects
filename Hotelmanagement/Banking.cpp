#include <iostream>
using namespace std;
using std::string;

//This is the definition of the class user
// making the attributes of the class public means it can be access by any other function or class in the 
// the program
// without puting public or private , the class attribute by default are private

class User
{
public:
    string Username;
    string Occupation;
    int Monthly_salary;
    int Age;
    int Phone;
    string Address;

    void aboutuser()
    {
        cout << "\n\n***********  USER INFO *************\n\n";
        cout << endl;
        cout << "Name: " << Username << "\n\nAge: " << Age << "\n\nOccupation: " << Occupation << "\n\nMonthly Salary: " << Monthly_salary << "\n\nContact (Number): " << Phone << "\n\nAddress: " << Address << endl;
        cout << endl;
    }

    User(string username, int age, int phone, string address, string occupation, int monthly_salary)
    {
        
        Username = username;
        Age = age;
        Phone = phone;
        Occupation = occupation;
        Monthly_salary = monthly_salary;
        Address = address;
    }
};
int main()
{
    User user1 = User("Richmond", 24, 654564179, "Bangante", "Software engineer", 200000);
    user1.aboutuser();
}
