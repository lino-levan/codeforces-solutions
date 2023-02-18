#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n;
  cin >> n;

  bool nums[n];

  for(int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  int count = 0;

  for(int s = 0; s < n; s++) {
    for(int e = s; e < n; e++) {
      // Make a copy of nums
      bool cur_nums[n];
      for(int i = 0; i < n; i++) {
        cur_nums[i] = nums[i];
      }

      for(int r = s; r <= e; r++) {
        cur_nums[r] = !cur_nums[r];
      }
      
      int cur_count = 0;

      for(int r = 0; r < n; r++) {
        if(cur_nums[r]) {
          cur_count++;
        }
      }

      count = max(cur_count, count);
    }
  }

  cout << count;

	return 0;
}