#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int fives = 0;
  int zeroes = 0;

  for(int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    if(temp == 5) {
      fives++;
    } else {
      zeroes++;
    }
  }

  if(fives > 0 && zeroes == 0) {
    cout << "-1";
  } else if(fives < 9) {
    cout << "0";
  } else {
    for(int i = 0; i < fives/9; i++) {
      cout << "555555555";
    }

    for(int i = 0; i < zeroes; i++) {
      cout << "0";
    }
  }

	return 0;
}