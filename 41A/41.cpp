#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s, t;
  cin >> s;
  cin >> t;

  for(int i = 0; i < s.size(); i++) {
    if(s.at(i) != t.at(t.size() - i - 1)) {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";

	return 0;
}