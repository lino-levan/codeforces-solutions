#include <iostream>
#include <string>

using namespace std;

int main()
{
  string n;
  cin >> n;

  string out = "";

  while(n.size() > 0) {
    // If the first three characters is "WUB" remove them
    // Insert a space if the last character of n is not a space
    if(n.substr(0, 3) == "WUB") {
      if(out[out.size()-1] != ' ') {
        out = out + " ";
      }
      n = n.substr(3);
      continue;
    }
    out = out + n[0];
    n = n.substr(1);
  }

  cout << out;

	return 0;
}