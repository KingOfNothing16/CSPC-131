#include "vector131.h"
#include <vector>
#include <iostream>
using namespace std;

vector131::vector131()
{
  // Variables 
  int count;
  int currentValue;
  int frontValue;
  int resizeVector;
  
  // Takes in user input to determine size of vector
  cout<<"Input Dynamic Array Size\n";
  cin >> count;
  
  // initialize vector
  std::vector<int> myVec;
  
  // Takes in user input to store in vector that loops by user initial count
  cout << "Input Values" << endl;
  for (int k = 0; k < count; k++)
  {
    
    cin >> currentValue;
    // uses pushback member function to insert values
    myVec.push_back(currentValue);

  }
  // for loop to print each value in vector
  for (int i: myVec)
  {
    cout << i << ", ";
  }

  cout << endl;
  
  // Asks user to resize the array to but must be smaller than initial value
  cout << "Which value would you like to resize the array to?";
  cin >> resizeVector;
  while (count < resizeVector)
  {
      cout << "Error value indicated is greater than vector allocated";
      cout << "Which value would you like to resize the array to?";
      cin >>  resizeVector;
  }
  // resizes vector based on user input
  myVec.resize(resizeVector);
  for (int i: myVec)
  {
    cout << i << ", ";
  }

  cout << endl;
  
  // Asks user to choose a value to insert into vector from the front
  cout << "What value would you like to add to the front?: ";
  cin >> frontValue;
  
  // push front would not work so I used insert instead
  myVec.insert(myVec.begin(),frontValue);

  for (int i: myVec)
  {
    cout << i << ", ";
  }
  cout << endl;

}
