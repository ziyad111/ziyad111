#include <iostream>
using namespace std;
int main()
{
    int num=0 , sum=0 , counter=1 ;
do
{
    cout<<"enter your grade\n";
    cin>>num;
    sum +=num;
    counter ++;
} while (counter<=3);

cout<<"the sum of the positive numbers is "<<sum<<"\n";

}