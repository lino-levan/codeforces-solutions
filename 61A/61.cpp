#include <iostream>
#include <string>

using namespace std;

int main()
{
  string f, s;
  cin >> f;
  cin >> s;

  for(int i = 0; i < f.size(); i++) {
    if(f.at(i) != s.at(i)) {
      cout << "1";
    } else {
      cout << "0";
    }
  }

	return 0;
}