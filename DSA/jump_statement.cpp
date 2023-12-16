// Print numbers from 1 to 100 except the numbers those are divisible by 3
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      for (int i = 1; i <= 100; i++)
//      {
//          if(i%3==0){
//              continue;
//          }
//          cout<<i<<"\t";
//      }
//      return 0;
//  }

// Program to check the given number is prime or not

#include <iostream>
using namespace std;
int main()
{
    int no, i;
    cout << "Enter a number" << endl;
    cin >> no;
    for (i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            cout << "Not Prime\n";
            break;
        }
    }
    if (i == no)
    {
        cout << "Prime Number\n";
    }
    return 0;
}