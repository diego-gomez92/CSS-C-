/*
* Title: lab2_3.cpp
* Description: This program allows the user to enter a number of quarters, dimes, nickels, and dollars. Then the program outputs the monetary value of the coins in cents. 
* Author: Diego Gomez
* Date: 9/12/2020
*/

#include <iostream>
using namespace std;


int main() {
  // Variables 
  int quarters, dimes, nickels, dollars, monetary_value;

  // User input 
  cout << "Enter number of quarters: ";
  cin >> quarters;
  cout << "Enter number of dimes: ";
  cin >> dimes;
  cout << "Enter number of nickels: ";
  cin >> nickels;
  cout << "Enter number of dollars: ";
  cin >> dollars;

  // Convert to cents 
  quarters *= 25;
  dimes *= 10;
  nickels *= 5;
  dollars *= 100;

  // Add all the cents together 
  monetary_value = quarters + dimes + nickels + dollars; 

  // Show user the monetary value 
  cout << "The monetary value is " << monetary_value << " cents.";

  // End program 
  return 0;
}