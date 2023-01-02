#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> home;
  vector<int> away;
  home.resize(n);
  away.resize(n);

  for(int i = 0; i < n; i++) {
    cin >> home[i];
    cin >> away[i];
  }

  int count = 0;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j) continue;

      if(home[i] == away[j]) {
        count++;
      }
    }
  }

  cout << count;

	return 0;
}