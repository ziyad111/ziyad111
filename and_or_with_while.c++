// end the program by entering -1

#include <iostream>
using namespace std;
int main()
{
    int grade=0 , sum=0 , counter=1;
cout<<"enter your grade or stop the program by writing -1 \n";

while(counter <=5 && grade !=-1)
{
    
    cin>>grade;
    sum += grade;
    counter ++;
}
cout<<"the sum of the positive numbers is "<<sum<<"\n";

}