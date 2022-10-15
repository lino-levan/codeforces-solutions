#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long binSearch(vector<int> &minLegHeight, int leg, int start, int end) {
  int middle = (start+end) / 2;
  
  if(minLegHeight.at(middle) <= leg && minLegHeight.at(middle+1) > leg) {
    return middle;
  }

  if(minLegHeight.at(middle) > leg) {
    return binSearch(minLegHeight, leg, 0, middle);
  }

  if(minLegHeight.at(middle) <= leg) {
    return binSearch(minLegHeight, leg, middle, end);
  }

  return -1;
}

void test()
{
  int numSteps;
  int numQuestions;
  cin >> numSteps;
  cin >> numQuestions;

  vector<int> minLegHeight;
  vector<long long> totalHeight;
  minLegHeight.resize(numSteps);
  totalHeight.resize(numSteps);

  int minHeight = 0;
  long long runningTotal = 0;
  for(int i = 0; i < numSteps; i++) {
    int temp;
    cin >> temp;
    
    runningTotal += temp;
    minHeight = max(temp, minHeight);
    totalHeight[i] = runningTotal;
    minLegHeight[i] = minHeight;
  }

  for(int i = 0; i < numQuestions; i++) {
    if(i != 0) {
      cout << " ";
    }
    int leg;
    cin >> leg;

    long index = 0;

    if(minLegHeight.at(numSteps-1) <= leg) {
      index = numSteps-1;
    } else if(minLegHeight.at(0) > leg) {
      index = -1;
    }else {
      index = binSearch(minLegHeight, leg, 0, numSteps-1);
    }

    if (index == -1) {
      cout << 0;
    } else {
      cout << totalHeight[index];
    }
  }
}

int main()
{
  int t;
  cin >> t;
  
  for(int i = 0; i < t; i++) {
    if(i != 0) {
      cout << "\n";
    }
    test();
  }

	return 0;
}