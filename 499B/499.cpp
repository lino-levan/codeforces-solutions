#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
  int numSpoken;
  int numWords;

  cin >> numSpoken;
  cin >> numWords;

  map<string, string> wordMap;

  // fill map with mapping for words
  for(int i = 0; i < numWords; i++) {
    string word1;
    string word2;

    cin >> word1;
    cin >> word2;

    if(word1.size() > word2.size()) {
      wordMap[word1] = word2;
      wordMap[word2] = word2;
    } else {
      wordMap[word2] = word1;
      wordMap[word1] = word1;
    }
  }

  for(int i = 0; i < numSpoken; i++) {
    if(i != 0) {
      cout << " ";
    }

    string word;
    cin >> word;

    cout << wordMap[word];
  }

	return 0;
}