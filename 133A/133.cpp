#include <iostream>
#include <string>

using namespace std;

int main()
{
  string p;
  cin >> p;

  for(int i = 0; i < p.size(); i++) {
    if(p.at(i) == 'H' || p.at(i) == 'Q' || p.at(i) == '9') {
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";

	return 0;
}