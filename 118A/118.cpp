#include <iostream>
#include <string>

int main()
{
  std::string inp;
  std::cin >> inp;
  
  std::string out;

  for(int i = 0; i < inp.length(); i++) {
    inp[i] = tolower(inp.at(i));

    if(inp.at(i) == 97 || inp.at(i) == 101 || inp.at(i) == 105 || inp.at(i) == 111 || inp.at(i) == 117 || inp.at(i) == 121) {
      continue;
    }

    out.push_back('.');
    out.push_back(inp.at(i));
  }

  std::cout << out;
	return 0;
}