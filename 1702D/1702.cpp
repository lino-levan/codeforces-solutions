#include <iostream>
#include <string>
#include <map>

using namespace std;

void test()
{
  string w;
  int p;
  cin >> w;
  cin >> p;

  map<char, int> charMap;

  int startingPrice = 0;
  for(int i = 0; i < w.size(); i++) {
    startingPrice += (int) w[i] - 96;

    if(charMap.count(w[i]) == 1) {
      charMap[w[i]] += 1;
    } else {
      charMap[w[i]] = 1;
    }
  }

  if(startingPrice <= p) {
    cout << w;
    return;
  }

  char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  while(startingPrice > p) {
    // find highest value in charMap
    char highestChar;
    for(int i = 25; i >= 0; i--) {
      if(charMap.count(alphabet[i]) == 0) continue;
      if(charMap[alphabet[i]] <= 0) continue;
      highestChar = alphabet[i];
      break;
    }

    // subtract from startingPrice
    charMap[highestChar]--;
    startingPrice -= (int) highestChar - 96;
  }

  string output;

  for(int i = 0; i < w.size(); i++) {
    if(charMap[w[i]] > 0) {
      output += w[i];
      charMap[w[i]]--;
    }
  }

  cout << output;
}

int main()
{
  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    if(i != 0 ) {
      cout << "\n";
    }
    test();
  }

	return 0;
}