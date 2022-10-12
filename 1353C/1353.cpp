#include <iostream>

using namespace std;

void test()
{
  long long n;
  cin >> n;

  long long moves = 0;

  long long numRings = (n/2)+1;

  long long totalTiles = 1;

  for(int ring = 1; ring < numRings; ring++) {
    long long numTilesInRing = (2*ring)*4;

    totalTiles += numTilesInRing;

    moves += numTilesInRing * ring;
  }

  cout << moves;
}

int main()
{
  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    if(i != 0) {
      cout << "\n";
    }
    test();
  }
	return 0;
}