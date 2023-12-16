#include <iostream>
using namespace std;

class Solution
{
public:
    int result = 0;
    int romanToInt(string s)
    {
        int n = (s.length());
        for (int i = 0; i < n; i++)
        {

            switch (s[i])
            {
            case 'I':
                result += 1;
                break;
            case 'V':
                result += 5;
                break;
            case 'X':
                result += 10;
                break;
            case 'L':
                result += 50 ;
                break;

            case 'C':
                result += 100;
                break;

            case 'D':
                result += 500;
                break;

            case 'M':
                result += 1000;
                break;
            }
        }
    }

};
int main(){
string g;
cin>>g;
Solution one;
one.romanToInt(g);
cout<<one.result;
}