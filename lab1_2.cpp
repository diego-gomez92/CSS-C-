/*
 * Title: lab1_2.cpp
 * Description: This program asks for your age.   
 * Author: Diego Gomez
 * Date: 9/6/2020
 */
#include <iostream>
using namespace std;
int main()
{
   // Declare a variable to store your number.
   int num;
   
   // Display prompt for number
   cout << "Enter your age: "; 
   // Store age 
   cin >> num;
   
   // Display the age.
   cout << "You are " << num << " years old." << endl;
   
   // Exit program
   return 0;
}