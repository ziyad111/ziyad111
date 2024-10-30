// finding if the number is between 0 and 100 so it is two statements (and statement)

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "inter a number please\n";
    cin >> num;
    if ((num >= 0) && (num <= 100))
        cout << "the number is between 0 and 100\n";
    else
        cout << "the number is not between 0 and 100\n";

    return 0;
}