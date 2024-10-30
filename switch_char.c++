#include <iostream>
using namespace std;
int main()
{
    char i;
    cout << "enter a char\n";
    cin >> i;

    switch (i) 

    {
    case 'v':
        cout << "this is case v\n";
        break;

    case 'a':
        cout << "this is case a\n";
        break;

    case 'b':
        cout << "this is case b\n";
        break;

    case 'c':
    case 'd':
        cout << "this is case c or d\n";
        break;

    default:
        cout << "you are in the default case\n";
        break;
    }
    return 0;
}