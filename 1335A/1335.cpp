#include <iostream>

using namespace std;

void test()
{
  long long n;
  cin >> n;

  long long result = n / 2;

  if (n % 2 == 0) {
    result --;
  }

  cout << result;
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