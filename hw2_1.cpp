/*
* Title: hw2_1.cpp
* Description: This program  reads a weight from a user and
displays their weight on different planets. 
* Author: Diego Gomez
* Date: 9/13/2020
*/

#include <iostream>
using namespace std;


int main() {

  // Variables 
  double weight, mer_wt, ven_wt, ear_wt, mar_wt, jup_wt, sat_wt, ura_wt, nep_wt, plu_wt;

  // User input for weight 
  cout << "Enter weight on Earth: ";
  cin >> weight;

  // Spacing 
  cout << "" << endl;

  // Titles 6 tabs apart
  cout << "Planet          Weight" << endl; 

  // Divider w/ double spacing 
  cout << "_ _ _ _ _ _ _ _  _ _ _  \n\n";

  // Arithmetic for conversion of weight for each planet 
  mer_wt = weight*0.38;
  ven_wt = weight*0.91;
  ear_wt = weight*1.0;
  mar_wt = weight*0.38;
  jup_wt = weight*2.34;
  sat_wt = weight*1.06;
  ura_wt = weight*0.92;
  nep_wt = weight*1.19;
  plu_wt = weight*0.06;

   // Print out to one decimal place 
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(1);

  // Print out weight conversion for each planet
  cout << "Mercury           " << mer_wt << endl; 
  cout << "Venus            " << ven_wt << endl; 
  cout << "Earth            " << ear_wt << endl; 
  cout << "Mars              " << mar_wt << endl; 
  cout << "Jupiter          " << jup_wt << endl; 
  cout << "Saturn           " << sat_wt << endl; 
  cout << "Uranus           " << ura_wt << endl;
  cout << "Neptune          " << nep_wt << endl;
  cout << "Pluto             " << plu_wt << endl;
  
  return 0;
}