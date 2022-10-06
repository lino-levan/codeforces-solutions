#include <iostream>

int main()
{
  // Definitely a bit cheaty ;)
  int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
  int inp;

  std::cin >> inp;

  for(int i = 0; i < 14; i++) {
    if(inp % lucky[i] == 0) {
      std::cout << "YES";
      return 0;
    }
  }

  std::cout << "NO";
	return 0;
}