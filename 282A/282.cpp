#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int x = 0;

  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;

    if(s.at(1) == '+') {
      x++;
    } else {
      x--;
    }
  } 

  cout << x;
	return 0;
}