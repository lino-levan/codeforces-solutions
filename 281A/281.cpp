#include <iostream>
#include <string>

using namespace std;

int main()
{
  string word;
  cin >> word;

  for(int i = 0; i < word.size(); i++) {
    if(i == 0) {
      cout << (char) toupper(word.at(i));
    } else {
      cout << word.at(i);
    }
  }

	return 0;
}