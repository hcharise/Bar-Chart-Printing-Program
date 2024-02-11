/*
Hannah Ashton

Professor Jonathan S. Weissman
CIS 554-M401 Object Oriented Programming in C++

Syracuse University
HW #3 - Exercise 5.16 p206-207
2/13/2024

Main.CPP

*/

#include <iostream> // To print messages and get input from user
#include "GraphArray.h" // Includes interface of GraphArray class

using std::cout; // Prints messages to user
using std::cin; // Receives input from user

int main() {
    int userInput; // Storees values from user, one at a time
    
    // Create class object to organize data for graph
    GraphArray graph1;
    
    // Display welcome message
    cout << "----------------------------------\n"
        << " Welcome to the Bar Graph Maker!!\n"
        << "----------------------------------\n\n";
    
    // Display intro to user
    cout << "This program will make a bar graph"
        << "\nof 5 integers between 1 and 30.\n\n";
        
    // Get user's input for 5 integers and add to array in GraphArray object
    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> userInput;
        graph1.setGraphElement(i, userInput);
    }
    
    // Prints the graph of the inputted data
    graph1.printGraph();

} // end main()
