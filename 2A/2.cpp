#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
  // DO NOT USE THIS CODE AS INSPIRATION, it is REALLY BAD

  unsigned int n;
  cin >> n;

  map<string, int> pointsMap;
  vector<pair<string, int>> playerTurns;

  for(int i = 0; i < n; i++) {
    string player;
    int points;

    cin >> player;
    cin >> points;

    playerTurns.push_back(make_pair(player, points));

    if(pointsMap.count(player) == 0) {
      pointsMap[player] = points;
    } else {
      pointsMap[player] += points;
    }
  }

  int maxPoints = 0;

  for (auto const& x : pointsMap)
  {
    if(maxPoints < x.second) {
      maxPoints = x.second;
    }
  }

  vector<string> winners;

  for (auto const& x : pointsMap)
  {
    if(maxPoints == x.second) {
      winners.push_back(x.first);
    }
  }

  if(winners.size() == 1) {
    cout << winners.at(0);
    return 0;
  }

  map<string, int> replayMap;

  for(int i = 0; i < n; i++) {
    pair<string, int> move = playerTurns.at(i);

    if(find(winners.begin(), winners.end(), move.first) != winners.end()) {
      if(replayMap.count(move.first) == 0) {
        replayMap[move.first] = move.second;
      } else {
        replayMap[move.first] += move.second;
      }
    }

    if(replayMap[move.first] >= maxPoints) {
      cout << move.first;
      return 0;
    }
  }
}