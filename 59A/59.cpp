#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  cin >> s;

  int lowerCount = 0, upperCount = 0;

  for(int i = 0; i < s.size(); i++) {
    if(s.at(i) == toupper(s.at(i))) {
      upperCount++;
    } else {
      lowerCount++;
    }
  }

  for(int i = 0; i < s.size(); i++) {
    if(upperCount > lowerCount) {
      cout << (char) toupper(s.at(i));
    } else {
      cout << (char) tolower(s.at(i));
    }
  }

	return 0;
}