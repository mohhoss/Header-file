//
//  main.cpp
//  Try
//
//  Seyed Mohamad Hosseinioun
//  CSCI 689/0001
//  Nithin Devang
//  Assignment 2
//  Due on 02.08.2017
//
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include "tax_Single.hpp"
#include "tax_Married_Joint.hpp"
#include "tax_Married_Sep.hpp"
#include "tax_Household.hpp"
using namespace std;


int main() {
    cout << "Enter your income please:\t";
    float Income;
    cin >> Income;
    
    //Creating ranges
    long int lowBnd;
    lowBnd = 1000*floor(Income/1000);
    
    
    //Printing the exact tax amounts
    cout << "Exact tax\n";
    cout << left; //left-justification
    cout << fixed << setprecision (2); //setting the number of digits after decimal point
    cout << setw(36) << "Single:" <<Tax_Single(Income) << "\n";
    cout << setw(36) << "Married filling jointly:" << Tax_Married_Joint(Income) << "\n";
    cout << setw(36) << "Married filling separately:" << Tax_Married_Sep(Income) << "\n";
    cout << setw(36) << "Head of household:" << Tax_Household(Income) << "\n\n";

    //Printing table
    //header
    cout << setw(15) << "Income" << "|";
    cout << setw(12) <<" "<< right<< setw(12)<< "Married"<< setw(12)<< "Married"<< setw(12) <<"Head" <<endl;
    cout << setw(15) << left << "Range" << "|";
    cout << setw(12) <<" " << right << setw(12) <<"Filing" << setw(12)<<"Filing"<< setw(12) <<"of" <<endl;
    cout << setw(15) << " " << "|";
    cout << setw(12) <<"Single"<< setw(12)<< "Jointly"<< setw(12)<< "Separately"<< setw(12)<< "Household"<< endl;
    for (int i=1; i<= 64 ; i++) cout<< "-";
    cout << "\n";
    
    setprecision(6);
    //body
    for (int i=1; i<= 20; i++) {
        cout << right << setw(7)<< lowBnd+(i-1)*50 <<"-" << setw(7)<< lowBnd+i*50 << "|" << right <<setw(12) << int(Tax_Single(lowBnd+i*50 - 25)+.5) << setw(12) << int(Tax_Married_Joint(lowBnd+i*50 - 25)+.5) << setw(12) << int(Tax_Married_Sep(lowBnd+i*50 - 25)+.5) << setw(12) << int(Tax_Household(lowBnd+i*50 - 25)+.5) << endl;
    }
    return 0;
    
    
}
