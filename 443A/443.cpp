#include <iostream>

using namespace std;

int main()
{  
  char cur_char;
  cin >> cur_char; // skip opening brace
  cin >> cur_char;

  int counts[26] = {}; 

  while(cur_char != '}') {
    if(cur_char > 96) {
      // is a letter
      counts[cur_char-97]++;
    }

    cin >> cur_char;
  }

  int count = 0;

  for(int i = 0; i < 26; i++) {
    if(counts[i] > 0) {
      count++;
    }
  }

  cout << count;

	return 0;
}