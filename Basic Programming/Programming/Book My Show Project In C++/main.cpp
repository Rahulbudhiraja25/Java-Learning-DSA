#include <iostream>
#include "admin.h"
using namespace std;
class user
{
public:
    string username;
    string gender;
    void getdata()
    {
        cout << "Enter your name" << endl;
        cin >> username;
        cout << "Enter your gender" << endl;
        cin >> gender;
    }
};
class homepage
{
public:
    string salutation;
    void checksal(string gender)
    {

        if (gender == "male")
        {

            salutation = "Mr.";
        }
        else
        {

            salutation = "Mrs.";
        }
    }
    void Welcomemessage(string username)
    {

        cout << ".......WELCOME TO BOOK MY SHOW," << salutation << username << endl;
    };
};
class options
{
    int choice;

public:
    options()
    {
        cout << "What do you want to do" << endl
             << "1. Book" << endl
             << "2.Cancel" << endl;
        cin >> choice;
    }
};
int main()
{

    user Rahul;
    Rahul.getdata();
    homepage h1;
    h1.checksal(Rahul.gender);
    h1.Welcomemessage(Rahul.username);
    options op;

    return 0;
}