/*
 * Title: hw1_1.cpp
 * Description: This program reads two integer numbers from a user and displays the sum, average, and product.   
 * Author: Diego Gomez
 * Date: 9/11/2020
 */

#include <iostream>
using namespace std;


int main() {

  // Initialize variables
  int num1, num2, sum, avg, product;

  // Get user input
  cout << "Enter two integers: ";
  cin >> num1 >> num2;
  cout << "You entered " << num1 << " and " << num2 << "." << endl;

  // Perform arithmetic 
  sum = num1 + num2;
  avg = (num1 + num2) / 2; 
  product = num1 * num2;

  // Dsiplay arithmetic
  cout << num1 << " + " << num2 << " = " << sum << endl;
  cout << "(" << num1 << " + " << num2 << ") / 2 = " << avg << endl;
  cout << num1 << " * " << num2 << " = " << product << endl;

  // Exit Program 
  return 0;
}