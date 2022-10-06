#include <iostream>

int main()
{
  int num;
  std::cin >> num;

  int vecX = 0;
  int vecY = 0;
  int vecZ = 0;

  for(int i = 0; i < num; i++) {
    int tempX = 0;
    int tempY = 0;
    int tempZ = 0;
    std::cin >> tempX;
    std::cin >> tempY;
    std::cin >> tempZ;
    vecX += tempX;
    vecY += tempY;
    vecZ += tempZ;
  }

  if(vecX == 0 && vecY == 0 && vecZ == 0) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }
	return 0;
}