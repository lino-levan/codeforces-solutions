#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fillVector(vector<int> &vec, int &num) {
  vec.resize(num);
  for(int i = 0; i < num; i++) {
    cin >> vec[i];
  }
}

int main()
{
  int listSize;
  cin >> listSize;

  vector<int> a;
  long long aScore = 0;

  vector<int> b;
  long long bScore = 0;

  fillVector(a, listSize);
  fillVector(b, listSize);

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  while(true) {
    if(a.size() == 0 && b.size() == 0) break;

    // a turn
    int maxA = a.size() > 0 ? a.at(a.size()-1) : 0;
    int maxB = b.size() > 0 ? b.at(b.size()-1) : 0;

    if(maxA > maxB) {
      aScore += maxA;
      a.pop_back();
    } else {
      b.pop_back();
    }

    // b turn
    maxA = a.size() > 0 ? a.at(a.size()-1) : 0;
    maxB = b.size() > 0 ? b.at(b.size()-1) : 0;

    if(maxB > maxA) {
      bScore += maxB;
      b.pop_back();
    } else {
      a.pop_back();
    }
  }

  cout << aScore - bScore;
	return 0;
}