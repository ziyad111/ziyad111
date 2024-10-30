#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout << "enter two numbers please\n";
    cin >> x;
    cin >> y;
    if (x == y)
        cout << "the numbers are equal\n";
    else if (x > y)
        cout << x << " is bigger than " << y << "\n";
    else
        cout << y << " is bigger than " << x << "\n";
    return 0;
}