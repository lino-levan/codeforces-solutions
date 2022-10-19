#include <iostream>
#include <string>

using namespace std;

void test()
{
  int n;
  string cur;
  cin >> n;
  cin >> cur;

  string pattern;
  cin >> pattern;

  if(cur == "g") {
    cout << 0;
    return;
  }

  int maxRunBeforeGreen = 0;
  int curRun = -1;
  for(int i = 0; i < n*2; i++) {
    if(curRun == -1 && pattern.at(i%n) == cur[0]) {
      curRun = 0;
    }

    if(curRun == -1) {
      continue;
    }

    if(pattern.at(i%n) == 'g') {
      maxRunBeforeGreen = max(maxRunBeforeGreen, curRun);
      curRun = -1;

      if(i > n-1) {
        break; // minor efficiency boost
      }
      continue;
    }
    curRun++;
  }

  cout << maxRunBeforeGreen;
}

int main()
{
  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    if (i != 0) {
      cout << "\n";
    }
    test();
  }

	return 0;
}