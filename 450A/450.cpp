#include <iostream>

using namespace std;

int main()
{
  int n, m;
  cin >> n;
  cin >> m;

  int a[n];

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int index = 0;

  while(true) {
    // if all array elements are 0 or negative, break
    bool to_break = true;
    for(int i = 0; i < n; i++) {
      if(a[i] > 0) {
        to_break = false;
      }
    }

    if(to_break) {
      break;
    }

    if(a[index] > 0) {
      a[index] -= m;
    }

    index++;
    index = index % n;
  }

  if(index != 0) {
    cout << index;
  } else {
    cout << n;
  }

	return 0;
}