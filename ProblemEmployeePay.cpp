/*
Jason Song
CPSC 298 interterm
Assignment 1
Problem Employee Pay
*/

#include <iostream>

using namespace std;

//This main function will output the worker's gross pay, each withholding amount, and the net take-home pay for the week

int main()
{
  //Initialize global variables
  int numHour;
  int totalPay;

//prompt the user for the number of hours
  cout << "Please input the number of hours you have worked in total for the week:" << endl;
  cin >> numHour;

  //use if statement to calculate the total pay
  if (numHour > 40)  { //this is assuming the regular amount of work hours for a week in total is 40
    int overTime = numHour-40;
    totalPay = (overTime*24) + (40*16);
  }
  else  {
    totalPay = numHour*16;
  }

  //output the total amount of money 
  cout << "The total amount of money earned over the week is: $" << totalPay << endl;


//calculate the net pay and withheld 6% for social secruity, 14% for federal income tax, 5% for stat income tax and $10 for medical insurance.
  double netPay = (totalPay - (totalPay*0.06) - (totalPay*0.14) - (totalPay*0.05) -10);

  //output the net pay
  cout << "The net pay after withholding for taxes and insurance is: $" << netPay <<endl;

  return 0;
}
