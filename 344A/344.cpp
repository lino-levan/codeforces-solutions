#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int count = 1;

  string previous;
  cin >> previous;

  for(int i = 1; i < n; i++) {
    string current;
    cin >> current;

    if(current != previous) {
      count++;
    }

    previous = current;
  }

  cout << count;

	return 0;
}