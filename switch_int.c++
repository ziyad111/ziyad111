#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "enter a number\n";
    cin >> i;

    switch (i) 
// inside the switch the whole statment have to be an integer
    {
    case 10:
        cout << "this is case 1\n";
        break;
// if I did not put the break button all the case will be written in the same time
    case 20:
        cout << "this is case 2\n";
        break;

    case 30:
        cout << "this is case 3\n";
        break;

    case 40:
    case 50:
        cout << "this is case 4 or 5\n";
        break;

    default:
        cout << "you are in the default case\n";
        break;
    }
    return 0;
}