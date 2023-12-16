#include <iostream>
using namespace std;
int main()
{
    int button;
    cout << "Press a Button from 1,2,3,4,5" << endl;
    cin >> button;
    switch (button)
    {
    case 1:
        cout << "Hello" << endl;
        break;
    case 2:
        cout << "Hola!" << endl;
        break;
    case 3:
        cout << "Namaste" << endl;
        break;
    case 4:
        cout << "Salut" << endl;
        break;
    case 5:
        cout << "Ciao" << endl;
        break;
    default:
        cout << "I am Still Learning More!!" << endl;
    }
    return 0;
}