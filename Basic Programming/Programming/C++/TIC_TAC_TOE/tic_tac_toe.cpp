#include <iostream>
#include "Tth.h"

int main()
{
    int player = 1, i, digit;

    char mark;
    getdata();
    animation();
    do
    {
        getboard();
        player = (player % 2) ? 1 : 2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> digit;

        mark = (player == 1) ? 'X' : 'O';

        if (digit == 1 && space[1] == '1')

            space[1] = mark;
        else if (digit == 2 && space[2] == '2')

            space[2] = mark;
        else if (digit == 3 && space[3] == '3')

            space[3] = mark;
        else if (digit == 4 && space[4] == '4')

            space[4] = mark;
        else if (digit == 5 && space[5] == '5')

            space[5] = mark;
        else if (digit == 6 && space[6] == '6')

            space[6] = mark;
        else if (digit == 7 && space[7] == '7')

            space[7] = mark;
        else if (digit == 8 && space[8] == '8')

            space[8] = mark;
        else if (digit == 9 && space[9] == '9')

            space[9] = mark;
        else
        {
            cout << "Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i = checkwin();

        player++;
    } while (i == -1);
    getboard();
    if (i == 1)

        cout << "==>\aPlayer " << --player << " win ";
    else
        cout << "==>\aGame draw";

    cin.ignore();
    cin.get();

    // getboard();
    // getinput();
    // system("cls");

    // getboard();
    return 0;
}