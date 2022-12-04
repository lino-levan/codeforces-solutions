#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  string word;
  cin >> word;

  // set up counting array
  int unique_count = 0;
  bool count[26];
  fill(count, count+26, false);

  for(int i = 0; i < word.size(); i++) {
    int val = word.at(i) - 97;

    if(!count[val]) {
      count[val] = true;
      unique_count++;
    }
  }

  if(unique_count % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }

	return 0;
}