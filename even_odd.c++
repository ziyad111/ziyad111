// finding even and odd numbers

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "please enter an integer number\n";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "right statement\n";
        cout << "this number is even";
    }
    else
    {
        cout << "the number you intered is an odd number\n";
        cout << "inter another number";
    }
    return 0;
}