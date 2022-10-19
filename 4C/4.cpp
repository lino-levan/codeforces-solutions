#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
  int t;
  cin >> t;
  map<string, int> users;

  for(int i = 0; i < t; i++) {
    if(i != 0) {
      cout << "\n";
    }

    string proposedUsername;
    cin >> proposedUsername;

    if(users.count(proposedUsername)) {
      // find username that is valid
      cout << proposedUsername + to_string(users[proposedUsername]);
      users[proposedUsername]++;
      continue;
    }

    users[proposedUsername] = 1;
    cout << "OK";
  }

	return 0;
}