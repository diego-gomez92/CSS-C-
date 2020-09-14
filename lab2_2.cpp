/*
* Title: lab2_2.cpp
* Description: This program converts a Celsius degree to a corresponding Fahrenheit degree.
* Author: Diego Gomez
* Date: 9/12/2020
*/

#include <iostream>
using namespace std;


int main() {
  // Variables 
  double Celsius, Fahrenheit;
 
  // Get user input for Celsius
  cout << "Enter a Celsius degree: ";
  cin >> Celsius;

  // Apply formula to convert from Celsius to Fahrenheit
  Fahrenheit = (9.0/5.0) * Celsius + 32.0;

  // Print out conversion output 
  cout << Celsius << " C --> " << Fahrenheit << " F";

  // End program
  return 0;
}