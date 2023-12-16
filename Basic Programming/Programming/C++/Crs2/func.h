#include<iostream>
#include <windows.h>
#include <string.h>
#include <fstream>
using namespace std;
void loading_animation()
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
};
string username, password, un, pw;
struct customerdata
{
    string name;
    string contact_no;
    string address;
    string DL_Number;
    int age;
};

void signup()
{
    customerdata c1;

    cout << "Signup Page\n\n";
    cout << "..........................\n";
    cout << "Enter your name\n";
    cin >> c1.name;
    cout << "Enter your contact\n";
    cin >> c1.contact_no;
    cout << "Enter your address\n";
    cin >> c1.address;
    cout << "Enter your DL Number\n";
    cin >> c1.DL_Number;
    cout << "Enter your Age\n";
    cin >> c1.age;
    cout << "...........................................\n";
    cout << "Press any key with Enter to Continue\n";
    char temp;
    cin >> temp;
    cout << "Signing Up Please Wait......\n";
    loading_animation();
    cout << "Choose a username\n\nUSERNAME MUST BE UNIQUE\n";
    cin >> username;
    // checking old file present with name or not
    ifstream ofcheck;
    ofcheck.open(username + ".txt");
    if (bool(ofcheck) == true)
    {
        // ofcheck.close(username+".txt");
        cout << "Username is in use try with other name\n\nRedirectting you to the Signup Screen.....\n";
        loading_animation();
        signup();
    }
    else
    {
        ofstream signup;
        signup.open(username + ".txt");
        signup << username;
        signup << c1.name;
        signup << c1.contact_no;
        signup << c1.address;
        signup << c1.age;
        signup << c1.DL_Number;
    }
    cout<<"Thankyou For signing up with us now you can Login\n\n";
    loading_animation();
    homescreen();
};
void homescreen()
{
    int choice;
    cout << "Hello User\n\n";

    cout << ".....................\n\n";
    cout << "Choose an option to continue\n\n1.Signup\n2.Login\n";
    cin >> choice;
    if (choice == 1)
    {
        loading_animation();
        signup();
    }
    else if (choice == 2)
    {
        loading_animation();
        login();
    }
    else{

        cout<<"Wrong Input!!......\n";
        homescreen();
    }
};