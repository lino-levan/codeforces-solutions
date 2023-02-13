#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> chars;

  char temp;
  cin >> temp;
  while(!cin.eof()) {
    int val = temp - 48;
    chars.push_back(val);
    cin >> temp;
  }


  for(int i = 0; i < chars.size(); i++) {
    int val = chars[i];

    if(i == 0 && val == 9) {
      cout << val;
      continue;
    }

    if(9 - val < val) {
      cout << 9 - val;
    } else {
      cout << val;
    }
  }

	return 0;
}