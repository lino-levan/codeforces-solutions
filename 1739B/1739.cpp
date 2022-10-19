#include <iostream>
#include <vector>

using namespace std;

void test()
{
  int n;
  cin >> n;

  vector<int> a; // output arr
  vector<int> d; // input arr
  d.resize(n);

  // fill array d
  for(int i = 0; i < n; i++) {
    cin >> d[i];
  }

  for(int i = 0; i < d.size(); i++) { // for each element of the input arr
    if(i == 0) { // if we are the first element, it's the same
      a.push_back(d.at(i));
      continue;
    }

    int val = d.at(i) + a.at(i-1); // calculate a possible result to push

    if (a.at(i-1) - d.at(i) >= 0 && d.at(i) != 0) { // check if it has two possibilities
      cout << -1;
      return;
    }

    a.push_back(val);
  }

  for(int i = 0; i < a.size(); i++) {
    if(i != 0) {
      cout << " ";
    }

    cout << a.at(i);
  }
}

int main()
{
  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    if(i != 0) {
      cout << "\n";
    }

    test();
  }

	return 0;
}

/*
2 6 3

2 8 5
2 8 11



1 0 2 5 - d

1 1 3 8 - correct a
*/