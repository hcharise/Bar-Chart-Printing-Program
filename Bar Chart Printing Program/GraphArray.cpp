/*
Hannah Ashton

Professor Jonathan S. Weissman
CIS 554-M401 Object Oriented Programming in C++

Syracuse University
HW #3 - Exercise 5.16 p206-207
2/13/2024

This program displays a bar graph represented by asterisks based on five numbers.
 
GraphArray.CPP

*/

#include <iostream>
#include <iomanip>
#include "GraphArray.h"

using std::cout;
using std::cin;
using std::setw;

GraphArray::GraphArray() {
    for (int i = 0; i < 5; i++) {
        graphData[i] = 0;
    }
} // end GraphArray() constructor

// SETTERS
void GraphArray::setGraphElement(int element, int value) {
    // Handle invalid input by reprompting user
    while (value <= 1 || value >= 30) {
        cout << "Number is not between 1 and 30.\n"
            << "Re-enter number: ";
        cin >> value;
    }
    
    graphData[element] = value;
   
} // end setGraphElements()

// GETTERS
int GraphArray::getGraphElement(int element) {
    return graphData[element];
} // end getGraph()

// printGraph()
void GraphArray::printGraph() {
    cout << "----------------------------------\n"
        << "Graph of Data:\n\n";
    for (int i = 0; i < 5; i++) {
        cout << setw(3) << getGraphElement(i) << ":";
        for (int j = 0; j < getGraphElement(i); j++) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "----------------------------------\n";
} // end printGraph()
