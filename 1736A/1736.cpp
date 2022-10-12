#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int flipStrategy(vector<int>& first, vector<int>& second) {
  int flips = 0;
  for(int i = 0; i < first.size(); i ++) {
    if(first.at(i) != second.at(i)) {
      flips++;
    }
  }
  return flips;
}

int sortStrategy(vector<int>& first, vector<int>& second) {
  int count1 = 0;
  int count2 = 0;

  for(int i = 0; i < first.size(); i ++) {
    if(first.at(i) == 1) {
      count1++;
    }

    if(second.at(i) == 1) {
      count2++;
    }
  }
  return abs(count1 - count2) + 1;
}

void test() {
  int n;
  cin >> n;

  vector<int> first;
  vector<int> second;

  for(int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    first.push_back(temp);
  }

  for(int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    second.push_back(temp);
  }

  // check if both are identical
  bool identical = true;
  for(int i = 0; i < n; i ++) {
    if(first.at(i) != second.at(i)) {
      identical = false;
    }
  }

  if(identical) {
    cout << 0;
    return;
  }

  int flip = flipStrategy(first, second);
  int sort = sortStrategy(first, second);

  cout << min(flip, sort);
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