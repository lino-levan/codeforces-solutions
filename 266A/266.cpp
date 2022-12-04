#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  int n;
  string s;
  cin >> n;
  cin >> s;

  int removed = 0;

  for(int i = 1; i < s.size(); i++) {
    if(s.at(i) == s.at(i-1)) {
      s.erase(i, 1);
      i--;
      removed++;
    }
  }
  
  cout << removed;

	return 0;
}