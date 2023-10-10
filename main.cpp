#include <iostream>
#include <string>

int main()
{
  std::cout << "This is the begining of the cpp Empire!\n";
  std::cout << "What is our slogan will be, dear comrade?\n";

  std::string inputStr = "";
  std::getline(std::cin, inputStr);
  std::cout << inputStr + " Indeed.\n";
}
