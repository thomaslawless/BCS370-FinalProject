//
//  Main.cpp
//  
//
//  Created by Thomas Lawless III on 12/14/20.
//

#include <stdio.h>
int main()
{
    val schedule -= new HomeworkSchedule("test","test");
  
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
        schedule.addHW(name, dueDate);
    }if (selection == 2) {
        std::cout << "Please enter the A. Name of the Assignment B. DueDate";
        cin >> name;
        cin >> duedate;
        schedule.getHW(name, duedate);
    }if (input == 3){
        std::cout << "The total number of assignments is" + schedule.getAssignments();
    }if (input == 4){
        return 3;
    }
}
