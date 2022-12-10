#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> m;
  m.resize(n);

  for(int i = 0; i < n; i++) {
    cin >> m[i];
  }

  sort(m.begin(), m.end());

  for(int i = 0; i < n; i++) {
    if(i != 0) cout << " ";
    cout << m[i];
  }

	return 0;
}