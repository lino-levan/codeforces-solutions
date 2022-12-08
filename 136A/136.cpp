#include <iostream>
#include <map>

using namespace std;

int main()
{
  int n;
  cin >> n;

  map<int, int> giftExchange;

  for(int i = 0; i < n; i++) {
    int temp;
    cin >> temp;

    giftExchange[temp] = i+1;
  }

  for(int i = 1; i < n+1; i++) {
    if(i != 1) cout << " ";
    cout << giftExchange[i];
  }

	return 0;
}