/*
* Title: hw2_2.cpp
* Description: This program asks the user to enter the number of
seconds as an integer value and that then displays the equivalent time in days, hours, minutes,
and seconds. 
* Author: Diego Gomez
* Date: 9/13/2020
*/

#include <iostream>
using namespace std;


int main() {

  // Variables 
  int total_seconds, replica_seconds, days, hours, minutes, seconds;

  // User input for total seconds 
  cout << "Enter the number of seconds: ";
  cin >> total_seconds;

  // Placeholder variable for total seconds 
  replica_seconds = total_seconds; 

  // Use modulus to perform arithmetic 
  // Seconds in day 
  days = total_seconds / 86400;
  total_seconds = total_seconds % 86400;

  // Seconds in hour 
  hours = total_seconds / 3600;
  total_seconds = total_seconds % 3600;

  // Seconds in minute 
  minutes = total_seconds / 60;
  total_seconds = total_seconds % 60;
  
  // Leftover Seconds 
  seconds = total_seconds / 1;

  // Print out total seconds in days, hours, minutes, and seconds  
  cout << replica_seconds << " seconds = " << days << 
  " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl; 

  // End program 
  return 0; 
}