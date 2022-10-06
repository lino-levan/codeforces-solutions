#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::vector<int> rotations;
  int numRotations;
	int bitmask;
	int maxBitmask;

	std::cin >> numRotations;

	for(int i = 0; i < numRotations; i++) {
		int temp;
		std::cin >> temp;
		rotations.push_back(temp);
	}

	bitmask = std::pow(2,rotations.size()) - 1;
	maxBitmask = bitmask + 1;

	for(int i = 0; i < maxBitmask; i++) {
		int total = 0;
		for(int i = rotations.size() - 1; i >= 0; i--) {
			int bit = (bitmask & ( 1 << i )) >> i;

			// std::cout << bit;

			if(bit == 1) {
				total += rotations.at(i);
			} else {
				total -= rotations.at(i);
			}
		}

		// std::cout << "\n";

		bitmask--;

		if(total%360 == 0) {
			std::cout << "YES";
			return 0;
		}
	}

	std::cout << "NO";
	return 0;
}