//
//  Homework.cpp
//  
//
//  Created by Thomas Lawless III on 12/9/20.
//
#include <iostream> 
#include <iterator> 
#include <map> 
using namespace std;

class Homework{
private:
    String name;
    int dueDate;
    String timeComplete;
   // String dateComplete;
    // need to make sure dateTime will be able to be searched and updated easily
    double grade;
    bool completed = false;

public:
    //set the assignment name;
     void Homework::setName(String assignmentName){
        name = assignmentName;
    }
    //set the due date
     void Homework::setDueDate(int due){
        dueDate = due;
    }
    //set the complete time
     void Homework::setTimeComplete(Sring completeTime){
         timeComplete = completeTime;
    }
   // //set the date complete
    //void Homework::setDateComplete(String completeDate){
    //    dateComplete = completeDate;
    }
    //set the grade
    void Homework::setGrade(double g){
        grade = g;
    }
    //set if assignment was completed
    void Homework::setCompleteAssign(bool complete){
        completed = complete;
    }
  
    
}

