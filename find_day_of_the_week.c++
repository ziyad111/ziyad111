#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "enter the number of the day in the week (from 1-7) \n";
    cin >> i;

    switch (i) 

    {
    case 1:
        cout << "this is Saturday\n";
        break;

    case 2:
        cout << "this is Sunday\n";
        break;

    case 3:
        cout << "this is Monday\n";
        break;

    case 4:
        cout << "this is Tuesday \n";
        break;

    case 5:
        cout << "this is Wednesday \n";
        break;

    case 6:
        cout << "this is Thursday \n";
        break;

    case 7:
        cout << "this is Friday \n";
        break;        

    default:
        cout << "you entered a number more than the days of the week\n";
        break;
    }
    return 0;
}