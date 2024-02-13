# Bar Chart Printing Program
This C++ program models utilizes object-oriented programming to print an asterisk bar chart based on five user-inputted integers.
Created by Hannah Ashton in February 2024 using XCode for Syracuse's CIS-554 Object Oriented Programming course.

<img width="350" alt="Screenshot 2024-02-11 at 9 49 55 AM" src="https://github.com/hcharise/Bar-Chart-Printing-Program/assets/110205350/a0019cb9-b7ab-47a6-9fc8-d170939dbb88">

<img width="334" alt="Screenshot 2024-02-11 at 9 45 47 AM" src="https://github.com/hcharise/Bar-Chart-Printing-Program/assets/110205350/51e5bbb4-068c-408a-a380-0379a675935c">


## Overall Structure
The program is broken into a three-tiered model (main, cpp, h files) to separate the test program from the class interface and its implementation. The main.cpp file prompts the user for an integer five times in a for loop, and passes each integer into an object of the GraphArray class using the setGraphElement() function. Main then calls the GraphArray's printGraph() function to display a bar graph of the integers to the user.

The interface of the GraphData class is outlined in the header file for distribution to the program's customer. The implementation of the GraphData class is kept hidden from the customer in the GraphData.cpp file.

## GraphData Class
The GraphData class organizes the data members and member functions needed to print the bar graph. This includes a private data member array of 5 integers, which are each initialized to 0 in the constructor.

There is also a setter function that allows each element of the GraphData array to be modified individually (this is used in the for loop after the user inputs each integer). Before updating the element in the array, though, the setter first checks that the input is valid (between 1 and 30); if the input is not within this range, the user is reprompted until a valid itneger is entered.

A getter function similarly retrieves each element of the GraphData array individually, which is used for displaying the array back to the user to ensure accuracy.

Lastly, the printGraph() function prints out the bar graph, using setw() for organization and formatting. The graph represents each integer as asterisks on a different line (ie. 7 is represented as *******).
