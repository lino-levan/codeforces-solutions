#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, m, a, b;
	cin >> n;
	cin >> m;
	cin >> a;
	cin >> b;

	int price = 0;

	while(n > 0) {
		// if m ticket makes more sense buy it
		if (min(m, n) / (double) b > 1 / (double) a) {
			n -= m;
			price += b;
			continue;
		}
		// otherwise buy regular ticket
		n -= 1;
		price += a;
	}
  
	cout << price;
	return 0;
}