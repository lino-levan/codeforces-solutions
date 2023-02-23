#include <iostream>

using namespace std;

int main()
{
  long long n;
  cin >> n;

  long long ft = 0; // # of 50s
  long long tf = 0; // # of 25s

  for(long long i = 0; i < n; i++) {
    long long cur;
    cin >> cur;

    if(cur == 25) {
      tf++;
    } else if(cur == 50) {
      if(tf == 0) {
        cout << "NO";
        return 0;
      }
      ft++;
      tf--;
    } else if(cur == 100) {
      if(ft >= 1 && tf >= 1) {
        ft--;
        tf--;
      } else if(tf >= 3) {
        tf-=3;
      } else {
        cout << "NO";
        return 0;
      }
    }
  }

  cout << "YES";

	return 0;
}