/*
Jason Song
CPSC 298 interterm
Assignment 1
Problem Fire Capacity
*/

#include <iostream>

using namespace std;

//This main function will output whether or not the meeting will be legal or not.
int main()  {
  //Initialize global variables
  int maxCap;
  int numPeople;

//Prompt user for inputs
  cout << "Please enter in the maximum capacity of the room: " << endl;
  cin >> maxCap;
  cout << "Please enter in the number of people in the room: " <<endl;
  cin >> numPeople;

//If statement to output wheteher the number of people can fit in the room
  if (numPeople < maxCap) {
    cout << "It is legal to hold the meeting. In fact, you can bring in " << maxCap-numPeople << " more people." << endl;
  }
  else if (numPeople >= maxCap) {
    cout << "It is illegal to hold the meeting. Therefore, you have to exclude " << numPeople-maxCap <<  " people." << endl;

    return 0;
  }
}
