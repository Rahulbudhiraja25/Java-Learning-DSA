#include <iostream>
#include <windows.h>
#include <string.h>
#include <fstream>
using namespace std;
string username, password, un, pw;
int car;
struct customerdata
{
    string name;
    string contact_no;
    string address;
    string DL_Number;
    int age;
};
void homescreen();
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
        signup << username << endl;
        signup << c1.name << endl;
        signup << c1.contact_no << endl;
        signup << c1.address << endl;
        signup << c1.age << endl;
        signup << c1.DL_Number << endl;
    }
    cout << "Thankyou For signing up with us now you can Login\n\n";
    loading_animation();
    homescreen();
};
void Carbookingpage()
{
    cout << "............................\n\n";
    cout << "CAR BOOKING PAGE\n\n";
    cout << "............................\n\n";
    cout << "Select the car you want to book\n";
    cout << "1.Swift Dzire\n2.Hyundai i20\n3.Toyata Crysta\n4.Audi q7\n5.Mercedies Benz\n6.Mahindra Thar\n7.Fortuner\n8.Range Rover";
    cin >> car;
    switch (car)
    {
    case 1:
        cout << "Your selected car is Swift Dzire \nThe rent per hour is 490\nYou can collect it anytime from your nearest brach after a verified payment slip and Id\nThankyou For being with us\n Have a Safe Journey\n";
        cin.get();
        exit(0);
        break;
    case 2:
        cout << "Your selected car is Hyundai i20 \nThe rent per hour is 550\nYou can collect it anytime from your nearest brach after a verified payment slip and Id\nThankyou For being with us\n Have a Safe Journey\n";
        cin.get();
        exit(0);
        break;
    case 3:
        cout << "Your selected car is Toyata Crysta \nThe rent per hour is 800\nYou can collect it anytime from your nearest brach after a verified payment slip and Id\nThankyou For being with us\n Have a Safe Journey\n";
        cin.get();
        exit(0);
        break;
    case 4:
        cout << "Your selected car is Audi q7 \nThe rent per hour is 1590\nYou can collect it anytime from your nearest brach after a verified payment slip and Id\nThankyou For being with us\n Have a Safe Journey\n";
        cin.get();
        exit(0);
        break;
    case 5:
        cout << "Your selected car is Mercedies Benz \nThe rent per hour is 2490\nYou can collect it anytime from your nearest brach after a verified payment slip and Id\nThankyou For being with us\n Have a Safe Journey\n";
        cin.get();
        exit(0);
        break;
    case 6:
        cout << "Your selected car is Mahindra Thar \nThe rent per hour is 1290\nYou can collect it anytime from your nearest brach after a verified payment slip and Id\nThankyou For being with us\n Have a Safe Journey\n";
        cin.get();
        exit(0);
        break;
    case 7:
        cout << "Your selected car is Fortuner \nThe rent per hour is 1120\nYou can collect it anytime from your nearest brach after a verified payment slip and Id\nThankyou For being with us\n Have a Safe Journey\n";
        cin.get();
        exit(0);
        break;
    case 8:
        cout << "Your selected car is Range Rover \nThe rent per hour is 1800\nYou can collect it anytime from your nearest brach after a verified payment slip and Id\nThankyou For being with us\n Have a Safe Journey\n";
        cin.get();
        exit(0);
        break;
    default:
        cout << "Wrong choice\n Select Again\n";
        loading_animation();
        Carbookingpage();
    }
};
void login()
{
    ifstream logincheck;
    logincheck.open(username + ".txt");
    if (bool(logincheck) == true)
    {
        customerdata c2;
        cout << "You are successfuly Logged In \nYour Profile:- \n";
        logincheck >> un;
        logincheck >> c2.name;
        logincheck >> c2.contact_no;
        logincheck >> c2.address;
        logincheck >> c2.age;
        logincheck >> c2.DL_Number;
        cout << "Your username is :-" << un << endl;
        cout << "Your name is :-" << c2.name << endl;
        cout << "Your contact is :-" << c2.contact_no << endl;
        cout << "Your address is :-" << c2.address << endl;
        cout << "Your age is :-" << c2.age << endl;
        cout << "Your Dl NO. is :-" << c2.DL_Number << endl;
        cout << "\nPress any key with enter to continue\n";
        char temp;
        cin >> temp;
        loading_animation();
        Carbookingpage();
    }
    else
    {
        cout << "Signup First\n\n";
        loading_animation();
        signup();
    }
};

int main()
{
    homescreen();

    return 0;
}
void homescreen()
{
    int choice;
    cout << "Hello User\n\n";

    cout << ".....................\n\n";
    cout << "Choose an option to continue\n\n1.Signup\n2.Login\n";
    cout << "IMP:- SIGNUP TO CONTINUE\n";
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
    else
    {

        cout << "Wrong Input!!......\n";
        homescreen();
    }
};
