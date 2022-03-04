#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  string input;
  int output;

  cout << "Enter a binary number: ";
  cin >> input;

  if (input.length() != 8)
  {
    cout << "Input integer must have the size of a byte. Please enter a valid input." << std::endl;
  }

  for (int i = 0; i < input.length(); i++)
  {
    if (input.at(i) == '1')
    {
      output += pow(2, 7 - i);
    }
  }

  cout << "The number in base 10 is " << output << endl;
}