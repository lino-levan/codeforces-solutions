#include <iostream>
#include <vector>

using namespace std;

void test()
{
  long long n;
  cin >> n;

  int scale = 0;
  vector<int> round;

  while(n > 0) {
    if (n % 10 != 0) {
      long long round_num = n % 10;
      for(int i = 0; i < scale; i++) {
        round_num *= 10;
      }

      round.push_back(round_num);
    }
    scale++;
    n = n / 10;
  }

  cout << round.size() << "\n";

  for(int round_num : round) {
    cout << round_num << " ";
  }
}

int main()
{
  long long t;
  cin >> t;

  for(long long i = 0; i < t; i++) {
    if(i !=0) cout << "\n";

    test();
  }

	return 0;
}