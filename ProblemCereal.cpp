/*
Jason Song
CPSC 298 interterm
Assignment 1
Problem Cereal
*/

#include <iostream>
#include <math.h> //math llibrary to use ciel() to round up

using namespace std;

//This main function will take in an input from the user and output the converted weight in tons and how many boxes needed to make a ton.

int main()  {
  //initialize the amount of ounces it is for a ton
  double ozPerTon = 35273.92;
  //Initialize userInput as an integer
  int userInput;

  //prompt the user for an input
  cout << "Input the weight of a package of breakfast cereal in ounces: " << endl;
  cin >> userInput;

  //calculate the weight of the cereal in tons
  double weight = userInput/ozPerTon;

  cout << "That is " << weight << " tons." << endl;
  //calculate the amount of boxes needed for a ton
  cout << "The number of cereal boxes needed to weigh a ton is: " << ceil(1/weight) << endl;

  return 0;

}
