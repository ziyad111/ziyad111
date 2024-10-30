#include <iostream>
using namespace std;
int main()
{
  int grade;
  cout << "enter your grade please\n";
  cin >> grade;
  if (grade > 100)
    cout << "enter a valid value please\n";
  else if ((grade >= 90) && (grade < 100))
  {
    cout << "congrats\n";
    cout << "you got an A\n";
  }
  else if ((grade >= 80) && (grade < 90))
  {
    cout << "congrats\n";
    cout << "you got a B";
  }
  else if ((grade >= 70) && (grade < 80))
  {
    cout << "congrats\n";
    cout << "you got a C";
  }
  else if ((grade >= 60) && (grade < 70))
  {
    cout << "congrats\n";
    cout << "you got a D";
  }
  else if ((grade >= 50) && (grade < 60))
  {
    cout << "you got an F";
  }
  else
  {
    cout << "sorry\n";
    cout << "you did not pass the exams";
  }
  return 0;
}