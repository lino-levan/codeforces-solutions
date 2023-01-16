#include <iostream>

using namespace std;

int main()
{
  string first, second, pile;
  cin >> first;
  cin >> second;
  cin >> pile;

  int target[26] = { 0 };
  int result[26] = { 0 };

  // fill target with letters from first and second
  for(char c: first) {
    target[c - 65]++;
  }
  for(char c: second) {
    target[c - 65]++;
  }

  // fill result with letters from the pile
  for(char c: pile) {
    result[c - 65]++;
  }

  // compare them and check for differences
  for(int i = 0; i < 26; i++) {
    if(target[i] != result[i]) {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";
	return 0;
}