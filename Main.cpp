//
//  Main.cpp
//  
//
//  Created by Thomas Lawless III on 12/14/20.
//

#include <stdio.h>
int main()
{
  
    std::cout << "Welcome to Homework Manager";
    std::cout << "Please select a function:";
    std::cout << "1. Add an Assignment | 2.Retrieve and Assignment | 3. Total Assignments | 4. Quit";
    
    int selection;
    cin >> selection;
    
    String name;
    String duedate;
    if (selection == 1) {
        std::cout << "Please enter the A. Name of the Assignment B. Due Date";
        cin >> name;
        cin >> duedate;
    }
}
