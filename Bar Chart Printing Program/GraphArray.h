/*
Hannah Ashton

Professor Jonathan S. Weissman
CIS 554-M401 Object Oriented Programming in C++

Syracuse University
HW #3 - Exercise 5.16 p206-207
2/13/2024

This program displays a bar graph represented by asterisks based on five numbers.
 
GraphArray.h

*/


// need header guard


class GraphArray {
public:
    // CONSTRUCTOR
    GraphArray();
    
    // SETTERS
    void setGraphElement(int element, int value);
    
    // GETTERS
    int getGraphElement(int element);
    
    void printGraph();
    
private:
    int graphData[5];
    
}; // end class Array

