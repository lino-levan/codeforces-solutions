#include <iostream>
#include <algorithm>

using namespace std;

long long getTime() {
  long long hours, minutes;
  cin >> hours;
  cin >> minutes;

  return hours * 60 + minutes;
}

int main()
{
  long long n;
  cin >> n;

  long long maxStreak = 1;

  long long last = getTime();
  long long curStreak = 1;
  
  for(long long i = 0; i < n - 1; i++) {
    long long cur = getTime();

    if(cur == last) {
      curStreak++;
    } else {
      maxStreak = max(maxStreak, curStreak);
      curStreak = 1;
    }

    last = cur;
  }

  maxStreak = max(maxStreak, curStreak);

  cout << maxStreak;

	return 0;
}