#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
  int k;
  cin >> k;

  map<char, int> charMap;

  string inputStr;
  cin >> inputStr;

  for(int i = 0; i < inputStr.size(); i++) {
    char c = inputStr.at(i);
    if(charMap.count(c) == 0) {
      charMap[c] = 1;
    } else {
      charMap[c]++;
    }
  }

  string out;

  for (auto const& x : charMap)
  {
    if(x.second % k != 0) {
      cout << -1;
      return 0;
    }

    for(int i = 0; i < x.second / k; i++) {
      out.push_back(x.first);
    }
  }

  for(int i = 0; i < k; i++) {
    cout << out;
  }

	return 0;
}