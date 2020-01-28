/*
Jason Song
CPSC 298 interterm
Assignment 1
Problem Inflation
*/

#include <iostream>
#include <math.h>

using namespace std;

//This main function will output the estimated cost of the item after the specified period

int main()  {
  //Initialize global variables
  double itemCost;
  int numYear;
  double inflat;

//prompt user for cost, years, and inflation percentage
  cout << "Please input the cost of the item: $";
  cin >> itemCost;
  cout << "Please input the number of years from now that the item willl be purchased: ";
  cin >> numYear;
  cout <<"Please input the percent rate of inflation: ";
  cin >> inflat;

//convert the user input to a deciaml
  inflat = inflat/100;

//for loop to calculate the cost of the item after the price inflates for a certain number of years
  for (int i = 0; i < numYear; ++i) {
    itemCost = itemCost * (1 + inflat);
  }
  //output the estimated cost of the item
  cout << "The estimated cost of the item after " << numYear << " years is $" << ceil(itemCost) << endl;

  return 0;

}
