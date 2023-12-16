#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
char space[10] = {'o','1','2','3','4','5','6','7','8','9'};
string n1, n2;
char token1, token2;
int digit, count = 1;

void animation()
{

    int i = 0;
    cout << "Loading.";
    while (i < 5)
    {
        cout << ".";
        Sleep(980);
        i++;
    };
    system("CLS");
};

void getdata()
{

    cout << "Enter the name of First Player: \n";
    getline(cin, n1);

    cout << "Enter the name of Second Player: \n";
    getline(cin, n2);

    cout << n1 << " is the player 1 so he will play first\n";
    cout << n2 << " is the player 2 so he will play second\n";
};

void getboard()
{
     system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << n1<<" (X)  -   "<<n2<<"(O)" << endl<< endl;
    cout << endl;

    cout << "     |       |     \n";
    cout << "  " << space[0] << "  |  " << space[1] << "    |  " << space[2] << "\n";
    cout << "     |       |     \n";
    cout << "___________________\n";
    cout << "     |       |     \n";
    cout << "  " << space[3] << "  |  " << space[4] << "    |  " << space[5] << "\n";
    cout << "     |       |     \n";
    cout << "___________________\n";
    cout << "     |       |     \n";
    cout << "  " << space[6] << "  |  " << space[7] << "    |  " << space[8] << "\n";
    cout << "     |       |     \n";
};

// void settoken()
// {
//     token1 = 'x';
//     token2 = '0';
// };

void getinput()
{
    while (count <= 9)
    {
        if (count % 2 != 0)
        {
            cout << "Player " << n1 << " Enter Your choice" << endl;
            cin >> digit;
            count++;
            break;
        }

        if (count % 2 == 0)
        {
            cout << "Player " << n2 << "Enter Your choice" << endl;
            cin >> digit;
            count++;
            break;
        }
    }
};

void updateboard(){
while(count%2!=0){
space[digit]=token1;
};

while(count%2==0){
space[digit]=token2;
};
// getboard();


};

int checkwin()
{
    if (space[1] == space[2] && space[2] == space[3])

        return 1;
    else if (space[4] == space[5] && space[5] == space[6])

        return 1;
    else if (space[7] == space[8] && space[8] == space[9])

        return 1;
    else if (space[1] == space[4] && space[4] == space[7])

        return 1;
    else if (space[2] == space[5] && space[5] == space[8])

        return 1;
    else if (space[3] == space[6] && space[6] == space[9])

        return 1;
    else if (space[1] == space[5] && space[5] == space[9])

        return 1;
    else if (space[3] == space[5] && space[5] == space[7])

        return 1;
    else if (space[1] != '1' && space[2] != '2' && space[3] != '3' && space[4] != '4' && space[5] != '5' && space[6] != '6' && space[7] != '7' && space[8] != '8' && space[9] != '9')

        return 0;
    else
        return -1;
}