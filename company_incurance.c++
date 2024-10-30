// finding if the number is between 0 and 100 so it is two statements (and statement)

#include <iostream>
using namespace std;
int main()
{
    char marital_status;
    char sex;
    int age;
    cout << "enter your marital status\n";
    cin >> marital_status;
    cout << "enter your sex\n";
    cin >> sex;
    cout << "inter your age\n";
    cin >> age;
    if ((marital_status == 'M') || ((sex == 'F') && (marital_status == 'S') && (age > 25)) || ((sex == 'M') && (marital_status == 'S') && (age > 30)))
        cout << "you will get an insurance\n";
    else
        cout << "you will not get an insurance\n";

    return 0;
}