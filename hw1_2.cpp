/*
 * Title: hw1_2.cpp
 * Description: Suppose a worker who works for a company has received a 7.6% pay increase next year. This program takes the worker’s current annual salary as input, and outputs the amount of salary increase, the new annual salary, and the new monthly salary.
 * Author: Diego Gomez
 * Date: 9/11/2020
 */

#include <iostream>
using namespace std;

int main() {

  // Initialize variables
  double current_salary, salary_increase, new_anual_salary, new_monthly_salary;

  // Get user input
  cout << "Enter your current salary => ";
  cin >> current_salary;

  // Perform arithmetic 
  salary_increase = current_salary * .076;  
  new_anual_salary = current_salary + salary_increase; 
  new_monthly_salary = (current_salary / 12) + (salary_increase / 12); 
  // Print out two decimal places 
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  // Print out new values
  cout << "Salary increase: $" << salary_increase << endl;
  cout << "New annual salary: $" << new_anual_salary << endl;
  cout << "New monthly salary: $" << new_monthly_salary << endl; 

  // Exit Program 
  return 0;
}