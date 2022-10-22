#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
  if (n == 2 || n == 3)
    return true;

  if (n <= 1 || n % 2 == 0 || n % 3 == 0)
    return false;

  for (int i = 5; i * i <= n; i += 6)
  {
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  }

  return true;
}

long long isSquared(long long x) {
  double squared = sqrt(x);

  if(ceil(squared) == floor(squared)) {
    return squared;
  }
  return -1;
}

int main()
{
  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    if(i != 0) {
      cout << "\n";
    }

    long long n;
    cin >> n;

    long long squareRoot = isSquared(n);

    if(squareRoot == -1) {
      cout << "NO";
      continue;
    }

    if(!isPrime(squareRoot)) {
      cout << "NO";
      continue;
    }
    
    cout << "YES";
  }

}