/*
Hannah Ashton

Professor Jonathan S. Weissman
CIS 554-M401 Object Oriented Programming in C++

Syracuse University
HW #3 - Exercise 5.16 p206-207
2/13/2024

This program displays a bar graph represented by asterisks based on five numbers.
 
MAIN.CPP

*/

/*
 One interesting application of computers is to display graph and bar charts.
 Write an application that reads five numbers between 1 and 30.
 For each number that's read, your program should display the same number of adjacent asterisks.
 For example, if your program reads the number 7, it should display *******.
 Display the bars of asterisks after you read all five numbers.
 */

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::setw;

class GraphArray {
public:
    // CONSTRUCTOR
    GraphArray() {
        for (int i = 0; i < 5; i++) {
            graphData[i] = 0;
        }
    } // end GraphArray() constructor
    
    // SETTERS
    void setGraphElement(int element, int value) {
        // Handle invalid input by reprompting user
        while (value <= 1 || value >= 30) {
            cout << "Number is not between 1 and 30.\n"
                << "Re-enter number: ";
            cin >> value;
        }
        
        graphData[element] = value;
       
    } // end setGraphElements()
    
    // GETTERS
    int getGraphElement(int element) {
        return graphData[element];
    } // end getGraph()
    
    // printGraph()
    void printGraph() {
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
    
private:
    int graphData[5];
    
}; // end class Array

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
