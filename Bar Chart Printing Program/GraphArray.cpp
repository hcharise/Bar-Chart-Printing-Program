/*
Hannah Ashton

Professor Jonathan S. Weissman
CIS 554-M401 Object Oriented Programming in C++

Syracuse University
HW #3 - Exercise 5.16 p206-207
2/13/2024

 This program displays an asterisk bar graph based on the user's input. The program prompts the user for the five integers. It then validates that these integers are between 1 and 30. Then, the program prints the input in the form of a bar graph, with asterisks representing each number (ex. 7 is represented as *******).

GraphArray.CPP

*/

#include <iostream> // To print messages and get input from user
#include <iomanip> // To format output on graph
#include "GraphArray.h" // Includes interface of GraphArray class, implemented here

using std::cout; // Prints messages to user
using std::cin; // Receives input from user
using std::setw; // Formats output to specified width

// CONSTRUCTOR
// Creates initial graphArray object with all five integers set to 0
GraphArray::GraphArray() {
    // Initialize five elements to 0
    for (int i = 0; i < 5; i++) {
        graphData[i] = 0;
    }
} // end GraphArray() constructor

// SETTERS
// Validates, then sets element of graphData at specified index to given value
void GraphArray::setGraphElement(int index, int value) {
    
    // Handle invalid input (not 1-30) by reprompting user
    while (value <= 1 || value >= 30) {
        cout << "* Not between 1 and 30! *\n"
            << "Re-enter new number " << index + 1 << ": ";
        cin >> value;
    }
    
    // Once input is valid, put input into array
    graphData[index] = value;
} // end setGraphElements()

// GETTERS
// Retrieves element at specified index
int GraphArray::getGraphElement(int index) {
    return graphData[index];
} // end getGraph()

// Prints graph of graphData
void GraphArray::printGraph() {
    // Display title of graph
    cout << "\n----------------------------------\n"
        << "Graph of Data:\n\n";
    
    // Visits each element of array, printing each on new line in asterisks
    for (int i = 0; i < 5; i++) {
        cout << setw(3) << getGraphElement(i) << ":"; // Prints element
        // Repeatedly prints asterisks until equal to element value
        for (int j = 0; j < getGraphElement(i); j++) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "----------------------------------\n\n";
} // end printGraph()
