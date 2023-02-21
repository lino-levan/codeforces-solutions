#include <iostream>

using namespace std;

void test() {
  int n;
  cin >> n;

  if(n == 1) {
    cout << "-1";
    return;
  }

  cout << "2";
  for(int i = 0; i < n - 1; i++) {
    cout << "3";
  }
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