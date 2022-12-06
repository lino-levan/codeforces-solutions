#include <iostream>
#include <string>

using namespace std;

int main()
{
  string n;
  cin >> n;

  int luckyCount = 0;

  for(char c: n) {
    if(c == '4' || c == '7') {
      luckyCount++;
    }
  }

  if(luckyCount == 0) {
    cout << "NO";
    return 0;
  }

  while(luckyCount != 0) {
    int leastSignficantDigit = luckyCount % 10;

    if(leastSignficantDigit != 4 && leastSignficantDigit != 7) {
      cout << "NO";
      return 0;
    }

    luckyCount = luckyCount / 10;
  }

  cout << "YES";

	return 0;
}