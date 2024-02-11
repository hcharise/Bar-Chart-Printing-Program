/*
Hannah Ashton

Professor Jonathan S. Weissman
CIS 554-M401 Object Oriented Programming in C++

Syracuse University
HW #3 - Exercise 5.16 p206-207
2/13/2024

This program displays an asterisk bar graph based on the user's input. The program prompts the user for the five integers. It then validates that these integers are between 1 and 30. Then, the program prints the input in the form of a bar graph, with asterisks representing each number (ex. 7 is represented as *******).
 
Main.CPP

*/

#include <iostream>
#include "GraphArray.h"

using std::cout;
using std::cin;

int main() {
    int userInput;
    
    // Create class object
    GraphArray graph1;
    
    // Display welcome meessage
    cout << "----------------------------------\n"
        << " Welcome to the Bar Graph Maker!!\n"
        << "----------------------------------\n\n";
    
    cout << "This program will make a bar graph"
        << "\nof 5 integers between 1 and 30.\n\n";
        
    // Get input and add to array
    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> userInput;
        graph1.setGraphElement(i, userInput);
    }
    
    cout << "\n";
    
    graph1.printGraph();
    
    cout << "\n";

} // end main()
