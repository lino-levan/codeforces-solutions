#include <iostream>
#include <cmath>

int main()
{
  double m;
  double n;
  double a;
  std::cin >> m;
  std::cin >> n;
  std::cin >> a;

  unsigned long long int height = std::ceil(m/a);
  unsigned long long int width = std::ceil(n/a);
  unsigned long long int num = height * width;

  std::cout << num;
	return 0;
}