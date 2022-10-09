#include <iostream>
#include <cmath>

int main()
{
  int strength;
  int numDragons;
  std::cin >> strength;
  std::cin >> numDragons;

  int dragonStrength[numDragons];
  int dragonBonus[numDragons];

  for(int i = 0; i < numDragons; i++) {
    int tempStrength;
    int tempBonus;
    std::cin >> tempStrength;
    std::cin >> tempBonus;

    dragonStrength[i] = tempStrength;
    dragonBonus[i] = tempBonus;
  }

  while(true) {
    int lost = true;
    int won = true;

    for(int i = 0; i < numDragons; i++) {
      // if there are any dragons left, we didn't win
      if(dragonStrength[i] != -1) {
        won = false;

        // if there is a dragon left with strength less than our own, fight it.
        if(dragonStrength[i] < strength) {
          lost = false;

          dragonStrength[i] = -1;
          strength += dragonBonus[i];
          break;
        }
      }
    }

    if(won) {
      std::cout << "YES";
      return 0;
    }
    if(lost) {
      std::cout << "NO";
	    return 0;
    }
  }
}