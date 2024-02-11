/*
Hannah Ashton

Professor Jonathan S. Weissman
CIS 554-M401 Object Oriented Programming in C++

Syracuse University
HW #3 - Exercise 5.16 p206-207
2/13/2024

 This program displays an asterisk bar graph based on the user's input. The program prompts the user for the five integers. It then validates that these integers are between 1 and 30. Then, the program prints the input in the form of a bar graph, with asterisks representing each number (ex. 7 is represented as *******).

GraphArray.h

*/

// Include Guard
#ifndef GRAPHARRAY_H
#define GRAPHARRAY_H

class GraphArray {
public:
    // CONSTRUCTOR
    GraphArray();
    
    // SETTERS
    void setGraphElement(int index, int value);
    
    // GETTERS
    int getGraphElement(int index);
    
    void printGraph();
    
private:
    int graphData[5];
    
}; // end class Array

#endif // GRAPHARRAY_H
