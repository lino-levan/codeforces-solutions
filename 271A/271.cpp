#include <iostream>
#include <set>

using namespace std;

int main()
{
  int y;
  cin >> y;

  int curY = y+1;

  while(true) {
    int curYCopy = curY;
    set<int> uniqueDigits;

    while(curYCopy != 0) {
      uniqueDigits.insert(curYCopy%10);
      curYCopy /= 10; 
    }

    if(uniqueDigits.size() == 4) break;

    curY++;
  }

  cout << curY;

	return 0;
}