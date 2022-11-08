#include <iostream>
#include <string>

using namespace std;

void test()
{
  string word;
  cin >> word;

  if(word.size() <= 10) {
    cout << word;
    return;
  }

  cout << word[0] << word.size()-2 << word[word.size()-1];
}

int main()
{
  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    if(i != 0) cout << "\n";
    test();
  }

	return 0;
}