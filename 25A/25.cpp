#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int lastOddIndex = -1;
  int lastEvenIndex = -1;
  int oddCount = 0;
  int evenCount = 0;

  for(int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    if (temp % 2 == 0) {
      lastEvenIndex = i;
      evenCount++;
    } else {
      lastOddIndex = i;
      oddCount++;
    }
  }

  if(evenCount == 1) {
    cout << lastEvenIndex+1;
  } else {
    cout << lastOddIndex+1;
  }

	return 0;
}