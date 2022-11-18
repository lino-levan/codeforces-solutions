#include <iostream>

using namespace std;

int main()
{
  int n, k;
  cin >> n;
  cin >> k;

  int a[n];
  int a_k = 0;

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int numValid = 0;

  for(int i = 0; i < n; i++) {
    if(a[i] > 0 && a[i] >= a[k-1]) {
      numValid++;
    }
  }

  cout << numValid;

	return 0;
}