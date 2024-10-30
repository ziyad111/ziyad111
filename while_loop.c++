// program that calculates the average grades for 6 students

#include<iostream>
using namespace std;
int main()
{
    int counter = 1;
    int grade =0;
    int sum =0;
while (counter <= 6)
{
    cout<<"enter your grade please student number "<<counter <<"\n";
    cin>>grade;
    sum+=grade ; //sum= sum + grade
    counter ++;

}
cout <<"the average grades is =" <<sum/counter <<"\n";
    return 0;
}