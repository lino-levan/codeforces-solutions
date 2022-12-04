#include <iostream>
#include <string>

using namespace std;

// honestly most of this is string formatting...
// this code is basically scuffed counting sort
int main()
{
  string s;
  cin >> s;

  int count_1 = 0, count_2 = 0, count_3 = 0;

  for(int i = 0; i < s.size(); i += 2) {
    char c = s.at(i);

    switch (c)
    {
      case '1':
        count_1++;
        break;
      case '2':
        count_2++;
        break;
      case '3':
        count_3++;
        break;
    }
  }

  bool first = true;

  for(int i = 0; i < count_1; i++) {
    if(!first) cout << "+";
    cout << "1";
    first = false;
  }

  for(int i = 0; i < count_2; i++) {
    if(!first) cout << "+";
    cout << "2";
    first = false;
  }

  for(int i = 0; i < count_3; i++) {
    if(!first) cout << "+";
    cout << "3";
    first = false;
  }

	return 0;
}