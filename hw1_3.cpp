/*
 * Title: hw1_3.cpp
 * Description: This program  allows the user to enter a number of cents. Then the program outputs the value in terms of quarters, dimes, nickels, and pennies. The output should look as follows.
 * Author: Diego Gomez
 * Date: 9/11/2020
 */

#include <iostream>
using namespace std;



int main() {

  // Initialize variables  
  int cents, quarters, dimes, nickles, pennies; 
  
  // User input for cents 
  cout << "Enter the number of cents: ";
  cin >> cents; 

  // Use modulus to perform arithmetic 
  quarters = cents / 25;
  cents = cents % 25;
  dimes = cents / 10;
  cents = cents % 10;
  nickles = cents / 5;
  cents = cents % 5;
  pennies = cents / 1;
  
  // Print out values for coins
  cout << "Number of quarters : " << quarters << endl;
  cout << "Number of dimes : " << dimes << endl;
  cout << "Number of nickels : " << nickles << endl;
  cout << "Number of pennies : " << pennies << endl;

  return 0;
}