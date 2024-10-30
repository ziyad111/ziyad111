 /*
 #include<iostream>
using namespace std;
int main ()
{
    int number;
    cout<<"inter a number\n";         // WE CAN USE \N TO MAKE A NEW LINE ADD ALSO WE CAN USE \T TO LEAVE A TAB SPACE
    cin>> number;
    cout<<"the number is\""<<number<<"\"\n";        // SO THIS /"/" IS USED TO PUT THE OUTPUT INSIDE THESE ""
    return 0;        // TO WRITE A NOTE WE USUALLY USE THESE // BUT TO MAKE A NOTE IN MANY LINES WE HAVE TO MAKE THE NOTE BETWEEN star and /
    */

// calculating the area of a rectangle

#include<iostream>
using namespace std;
int main()
{

    //the input from the user
    int length, width;
    int area;
    cout<<"inter the lenght and the width of the rectangle please\n";
    cin>> length; //instead of both of these cins we can do it like this cin>> length >>width;
    cin>> width;

    //the processing
    area = length * width; // we can skip this part and directely in the result part and write cout width*length to save some space

    //the output
    cout<<"the area of the rectangle = "<<area<<"\n";
    return 0 ;

}

