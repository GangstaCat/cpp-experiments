#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  string charSet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#%^&*-_+/.\\";
  int length = 10;
  cout << "How long should the password be? \n";
  cin >> length;

  if (length < 10)
  {
    cout << "Minimal Password length should be 10";
    return 1;
  }

  for (int i = 0; i < length; i++)
  {
    int randInt = rand() % charSet.length();
    char randChar = charSet.at(randInt);
    cout << randChar;
  }
  return 0;
}