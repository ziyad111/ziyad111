#include<iostream>
using namespace std;
int main()
{
    int grade;
    cout<<"inter your grade\n";
    cin>> grade;
    if (grade>=60) // we can use any relational expresion like (==)which means equal or (!=) which means not equal
    {
        cout<<"congratulations\n";
        cout<<"you have passed the exam\n";
        cout<<"go to the next level\n";
    }
    else
    {
        cout << "sorry\n";
        cout << "you did not pass the exam\n";
        cout << "you have to repeat this level again\n";

    } 
        return 0;
    
}