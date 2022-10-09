#include <iostream>
#include <cmath>

int main()
{
  int a;
  int b;
  int c;
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;

  int res;

  res = std::max(res, a+b+c);
  res = std::max(res, (a*b)+c);
  res = std::max(res, a+(b*c));
  res = std::max(res, (a+b)*c);
  res = std::max(res, a*(b+c));
  res = std::max(res, a*b*c);

  std::cout << res;
	return 0;
}