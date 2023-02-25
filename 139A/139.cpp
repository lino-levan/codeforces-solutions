#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int p[n];

  for(int i = 0; i < 7; i++) {
    cin >> p[i];
  }

  int index = 0;

  do {
    index = index % 7;
    n -= p[index];
    index++;
  } while(n > 0);

  cout << index;

	return 0;
}