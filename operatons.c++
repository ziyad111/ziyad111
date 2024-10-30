#include <iostream>
using namespace std;
int main()
{
    float a; 
    float b;
    cout << "enter the first number\n";
    cin >> a;
    cout << "enter the second number\n";
    cin >> b;

    char operation;
    cout << "choose the operation ['+','-','*','/']:\n ";
    cin >> operation;
    if (operation == '+')
        cout << a << "+" << b << "=" << a + b << "\n";
    else if (operation == '-')
        cout << a << "-" << b << "=" << a - b << "\n";
    else if (operation == '*')
        cout << a << "*" << b << "=" << a * b << "\n";
    else if ((operation == '/')&&(b!=0))
    //if(b!=0)
        cout << a << "/" << b << "=" << a / b << "\n"; //<<float(a)/float(b);
    else
        cout << "error\n";

    return 0;
}