#include <iostream>
#include <string>

int main()
{
  std::string inp;
  std::cin >> inp;

  bool toCorrect = true;

  for(int i = 1; i < inp.length(); i++) {
    if(std::islower(inp.at(i))) {
      toCorrect = false;
      break;
    }
  }

  if(!toCorrect) {
    std::cout << inp;
    return 0;
  }

  for(int i = 0; i < inp.length(); i++) {
    if(std::islower(inp.at(i))) {
      inp[i] = std::toupper(inp.at(i));
    } else {
      inp[i] = std::tolower(inp.at(i));
    }
  }
  std::cout << inp;
	return 0;
}