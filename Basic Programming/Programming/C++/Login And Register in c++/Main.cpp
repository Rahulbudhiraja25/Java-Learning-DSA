#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;
string username, password, un, pw;
void homepage()
{
    string animation = "Note:- Please register before login";
    cout << "Hello user, Press\n 1.Login \n 2.Register\n ";
    int x = 0;
    while (animation[x] != '\0')
    {

        cout << animation[x];
        Sleep(80);
        x++;
    }
};
void registerpage()
{ cout<<"REGESTRSTION PAGE....\n\n";
    // string dir = username + ".txt";
    cout << "Choose a Username";
    cin >> username;
    cout << "Set Password";
    cin >> password;

    ofstream registerfile;
    registerfile.open(username + ".txt");
    registerfile << username << endl;
    registerfile << password;
    registerfile.close();
    homepage();
};

void loginpage()
{
    cout << "Enter your Login Details....\n";
    cout << "Enter you Username\n";
    cin >> username;
    cout << "Enter Password\n";
    cin >> password;
    ifstream loginfile;
    loginfile.open(username + ".txt");
    if (bool(loginfile) == true)
    {
        loginfile >> un;
        loginfile >> pw;
        loginfile.close();
        cout << "You successfully Logged in\n\n";
        cout << "Your username is " << un;
        cout << "Your password is " << pw;
    }
    else
    {
        string a;
        cout << "Register First\n\nPress Any Key with Enter to continue";
        cin >> a;
        registerpage();
    }
};

void checkchoice(int a)
{
    if (a == 1)
    {

        loginpage();
    }
    else if (a == 2)
    {

        registerpage();
    }
    else
    {
        cout << "Invalid Choice!!\n\n";
    }
};
int main()
{
    system("color 2A");
    int choice;
    homepage();
    fflush(stdin);
    cin >> choice;
    checkchoice(choice);

    return 0;
}