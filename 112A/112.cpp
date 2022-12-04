#include <iostream>
#include <string>

using namespace std;

int main()
{
  string a, b;
  cin >> a;
  cin >> b;

  for(int i = 0; i < a.size(); i++) {
    char a_i = tolower(a.at(i));
    char b_i = tolower(b.at(i));

    if (a_i < b_i) {
      cout << "-1";
      return 0;
    }

    if (a_i > b_i) {
      cout << "1";
      return 0;
    }
  }

  cout << "0";

	return 0;
}