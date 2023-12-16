#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;
int userchoice;
//structure that was used for taking details about car.
struct car
{
    string carno;
    string color;
    string brand;
    string model;
    int renthalf;
    int rentone;
    int rentoneday;
};
//structure that was used for taking user details.
struct customer
{
    string customerac;
    string customerdl;
    string name;
    string phonenumber;
    int costavail;
    string address;
};
//A loading animation
void loadinganimation()
{

    cout << '-' << flush;
    for (int i = 0; i < 30; i++)
    {
        Sleep(1);
        cout << "\b\\" << flush;
        Sleep(1);
        cout << "\b|" << flush;
        Sleep(1);
        cout << "\b/" << flush;
        Sleep(1);
        cout << "\b-" << flush;
    }

    system("cls");
}
//function that was used for maintaining the functioning of user pannel.
void user()
{
    string welcometext = "Welcome to User Pannel Of Car Rent System\n\n";
    cout << welcometext;
    cout << ".....................................\n";
    cout << "Choose an Option \n";
    cout << "1. Rent a car\n2.Enquiry about car 3.Sell a car\n ";
    cin >> userchoice;
    string cars;
    // struct car car1;
    if (userchoice == 1)
    {
        ofstream car;
        while(cars!="\0"){
        car<<cars; 
        cout<<cars;
        }
    }
}
// Admin user pannel
void adminuserpannel()
{
    int adminuserchoice;
    cout << "Signin as Admin Or Use as Customer\n";
    cout << "..........................\n\n";
    cout << "1. Admin Pannel\n 2. User Pannel\n";
    cin >> adminuserchoice;
    if (adminuserchoice == 1)
    {
        loadinganimation();
        // admin();
    }
    else if (adminuserchoice == 2)
    {

        loadinganimation();
        user();
    }
    else
    {

        cout << "Wrong Input!!\n\n";
        adminuserpannel();
    }
}
// main password screen for loggin in.
void passwordscreen()
{
    string password;
    cout << "---------------------------------------------\n";
    cout << " Enter Password    \n";
    cin >> password;

    cout << "---------------------------------------------\n";

    if (password == "Rahul12")
    {
        loadinganimation();
        adminuserpannel();
    }
    else
    {

        cout << "Wrong Password!!\nTry Again\n";
    }
}
