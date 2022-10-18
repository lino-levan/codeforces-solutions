#include <iostream>
#include <set>

using namespace std;

int main()
{
  cout.precision(20); // I am so pissed off right now. You would not believe it.

  int n;
  long long l;
  cin >> n;
  cin >> l;

  set<long long> laterns;

  for(int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    laterns.insert(temp);
  }

  bool first = true;
  long long maxDist = 0;
  long long lastLaternPos = 0;
  long long firstLaternPos = 0;

  for(auto val: laterns) {
    if(first) {
      lastLaternPos = val;
      firstLaternPos = val;
      first = false;
      continue;
    }

    maxDist = max(abs(val - lastLaternPos), maxDist);
    lastLaternPos = val;
  }

  double distance = maxDist / 2.0;
  distance = max((double) firstLaternPos, distance);
  distance = max((double) (l-lastLaternPos), distance);

  cout << distance;

	return 0;
}