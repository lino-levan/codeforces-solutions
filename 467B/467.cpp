#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, m, k;
  cin >> n;
  cin >> m;
  cin >> k;


  vector<long long> armies;
  armies.resize(m + 1);

  for(int i = 0; i < m + 1; i++) {
    cin >> armies[i];
  }

  long long my_soldiers = armies[m];

  int count = 0;

  for(int i = 0; i < m; i++) {
    int differences = 0;

    for(int j = 0; j < n; j++) {
      long long mask = (1 << j);

      if((my_soldiers & mask) != (armies[i] & mask)) {
        differences++;
      }
    }

    if(differences <= k) {
      count++;
    }
  }

  cout << count;

	return 0;
}