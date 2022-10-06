#include <iostream>
#include <string>

int main()
{
  std::string hello = "hello";
  std::string input;
  std::cin >> input;
  int index = 0;

  for(int i = 0; i < input.length(); i++) {
    if(input.at(i) == hello.at(index)) {
      index++;
    }

    if(index == hello.length()) {
      std::cout << "YES";
      return 0;
    }
  }

  std::cout << "NO";

	return 0;
}