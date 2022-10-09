#include <iostream>
#include <string>

int main()
{
  int n;
  std::cin >> n;
  
  int score1 = 0;
  int score2 = 0;

  std::string team1;
  std::string team2;

  for(int i = 0; i < n; i++) {
    std::string curTeam;
    std::cin >> curTeam;

    // set the names for the teams
    if(score1 == 0) {
      team1 = curTeam;
    } else {
      if(team1 != curTeam && score2 == 0) {
        team2 = curTeam;
      }
    }

    if(curTeam == team1) {
      score1++;
    } else if(curTeam == team2) {
      score2++;
    }
  }

  // We know there are no ties
  if(score1 > score2) {
    std::cout << team1;
  } else {
    std::cout << team2;
  }

	return 0;
}