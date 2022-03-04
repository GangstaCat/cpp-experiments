#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  string charSet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
  string output;
  int length = 10;
  int input = length;
  cout << "How long should the password be? \n";
  cin >> input;
  if (input < length)
  {
    cout << "minimal password length should be 10";
    return 1;
  }

  for (int i = 0; i < input; i++)
  {
    int randInt = rand() % charSet.length();
    char randChar = charSet.at(randInt);
    cout << randChar;
  }
  return 0;
}