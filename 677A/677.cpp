#include <iostream>

using namespace std;

int main()
{
  int n, h;
  cin >> n;
  cin >> h;

  int width = 0;

  for(int i = 0; i < n; i++) {
    int friendHeight;
    cin >> friendHeight;

    width++;
    if(friendHeight > h) width++;
  }

  cout << width;

	return 0;
}