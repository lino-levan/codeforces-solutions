#include <iostream>
#include <set>

using namespace std;

int main()
{
  int n;
  cin >> n;

  set<int> levels;

  int x;
  cin >> x;
  for(int i = 0; i < x; i++) {
    int temp;
    cin >> temp;
    levels.insert(temp);
  }

  int y;
  cin >> y;
  for(int i = 0; i < y; i++) {
    int temp;
    cin >> temp;
    levels.insert(temp);
  }

  for(int i = 1; i < n+1; i++) {
    if(!levels.count(i)) {
      cout << "Oh, my keyboard!";
      return 0;
    }
  }

  cout << "I become the guy.";
	return 0;
}