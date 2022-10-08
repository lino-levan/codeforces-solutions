#include <iostream>
#include <cmath>

int main()
{
  int numGroups;
  std::cin >> numGroups;

  int c1 = 0;
  int c2 = 0;
  int c3 = 0;
  int c4 = 0;

  for(int i = 0; i < numGroups; i++) {
    int group;
    std::cin >> group;

    if(group == 1) {
      c1++;
    }
    if(group == 2) {
      c2++;
    }
    if(group == 3) {
      c3++;
    }
    if(group == 4) {
      c4++;
    }
  }

  int taxis = c4;

  // take care of c3
  int c3c1 = std::min(c3, c1);

  taxis += c3c1;
  c3 -= c3c1;
  c1 -= c3c1;
  taxis += c3;

  // take care of c2
  int c2c2 = c2 / 2;
  taxis += c2c2;
  c2 -= c2c2 * 2;

  int c2c1c1 = std::min(c2, c1/2);
  taxis += c2c1c1;
  c2 -= c2c1c1;
  c1 -= c2c1c1*2;

  int c2c1 = std::min(c2, c1);
  taxis += c2c1;
  c2 -= c2c1;
  c1 -= c2c1;

  taxis += c2;

  // take care of c1
  int c1c1c1c1 = c1 / 4;
  taxis += c1c1c1c1;
  c1 -= c1c1c1c1 * 4;

  int c1c1c1 = c1 / 3;
  taxis += c1c1c1;
  c1 -= c1c1c1 * 3;

  int c1c1 = c1 / 2;
  taxis += c1c1;
  c1 -= c1c1 * 2;

  taxis += c1;

  // return result
  std::cout << taxis;
	return 0;
}