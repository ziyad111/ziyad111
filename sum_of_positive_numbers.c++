// program to print out the sum of the numbers entered from the user
//as long as it is positive numbers

#include <iostream>
using namespace std;
int main()
{
    int num=0 , sum=0;
while(num >=0)
{
    cout<<"enter a positive number\n";
    cin>>num;
    sum +=num;
}
cout<<"the sum of the positive numbers is "<<sum<<"\n";

}