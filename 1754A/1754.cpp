#include <iostream>

using namespace std;

void test()
{
  int n;
  cin >> n;

  int q = 0;
  int a = 0;

  for(int i = 0; i < n; i++) {
    char c;
    cin >> c;

    if(c == 'Q') {
      q++;
    } else {
      a++;
    }

    if(a == 1) {
      if(q > 0) {
        q--;
      }
      a = 0;
    }
  }

  if(q > 0) {
    cout << "No";
  } else {
    cout << "Yes";
  }
}

int main()
{
  int t;
  cin >> t;

  for(int i=0; i<t; i++) {
    if (i != 0) cout << "\n";
    test();
  }

	return 0;
}