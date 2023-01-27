#include <iostream>

using namespace std;

int main()
{
  long long n;
  cin >> n;

  long long police = 0, crimes = 0;

  for(long long i  = 0; i < n; i++) {
    int cur;
    cin >> cur;

    if(cur == -1) {
      if(police > 0) {
        police--;
      } else {
        crimes++;
      }
    } else {
      police += cur;
    }
  }

  cout << crimes;

	return 0;
}