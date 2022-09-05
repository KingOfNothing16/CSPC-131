#include "vector131.h"
#include <vector>
#include <iostream>
using namespace std;

vector131::vector131()
{
  int count;
  int currentValue;
  int frontValue;
  int resizeVector;

  cout<<"Input Dynamic Array Size\n";
  cin >> count;

  std::vector<int> myVec;

  cout << "Input Values" << endl;
  for (int k = 0; k < count; k++)
  {
    
    cin >> currentValue;
    myVec.push_back(currentValue);

  }

  for (int i: myVec)
  {
    cout << i << ", ";
  }

  cout << endl;

  cout << "Which value would you like to resize the array to?";
  cin >> resizeVector;
  while (count < resizeVector)
  {
      cout << "Error value indicated is greater than vector allocated";
      cout << "Which value would you like to resize the array to?";
      cin >>  resizeVector;
  }
  myVec.resize(resizeVector);
  for (int i: myVec)
  {
    cout << i << ", ";
  }

  cout << endl;

  cout << "What value would you like to add to the front?: ";
  cin >> frontValue;
  myVec.insert(myVec.begin(),frontValue);

  for (int i: myVec)
  {
    cout << i << ", ";
  }
  cout << endl;

}
