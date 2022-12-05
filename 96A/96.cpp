#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  cin >> s;

  int count = 0;
  char cur = '-';

  for(char c: s) {
    if(c != cur) {
      if(count >= 7) {
        cout << "YES";
        return 0;
      }
      count = 1;
      cur = c;
    } else {
      count++;
    }
  }

  if(count >= 7) {
    cout << "YES";
  } else {
    cout << "NO";
  }

	return 0;
}