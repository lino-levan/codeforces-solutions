#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  int n, t;
  string line;
  cin >> n;
  cin >> t;
  cin >> line;

  // for every timestep
  for(int i = 0; i < t; i++) {
    vector<int> swap;

    // go through the line and figure out what indexes need swapping
    for(int j = 0; j < n-1; j++) {
      if(line.at(j) == 'B' && line.at(j+1) == 'G') {
        swap.push_back(j);
      }
    }

    // do the actual swapping
    for(int j: swap) {
      line[j] = 'G';
      line[j+1] = 'B';
    }
  }

  cout << line;

	return 0;
}