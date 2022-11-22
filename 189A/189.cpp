#include <iostream>

using namespace std;

int main()
{
  int n, a, b ,c;
  cin >> n;
  cin >> a;
  cin >> b;
  cin >> c;

  int max = -1;

  for(int i = 0; i < (n / a) + 1; i++) {
    for(int j = 0; j < (n / b) + 1; j++) {
      int cur = (i * a) + (j * b);

      if(cur > n) break;
      
      int diff = n - cur;
      int numC = diff / c;
      cur += numC * c;

      if(cur == n)  {
        int numCuts = i + j + numC;
        if (max < numCuts) {
          max = numCuts;
        }
      }
    }
  }

  cout << max;

	return 0;
}