//
//  Homework.cpp
//  
//
//  Created by Thomas Lawless III on 12/9/20.
//
#include <iostream>
#include <string>
using namespace std;

class Homework{
public:
    //setters
    void setName(String assignName);
    void setDueDate();
    void setTimeComplete();
    void setDateComplete();
    void setGrade();
    bool setCompleteAssign();
private:
    String name;
    //dateTime dueDate;
    //dateTime timeComplete;
    //dateTime dateComplete;
    // need to make sure dateTime will be able to be searched and updated easily
    double Grade;
    bool completed = false;
        
    //set the assignment name;
    void Homework::setName(String studentName){
        name = studentName;
    }
    
    //set the due date
    void Homework::setDueDate(){
        
    }
    
    //set the complete time
    void Homework::setTimeComplete(){
        
    }
    
    //set the date complete
    void Homework::setDateComplete(){
        
    }
    
    //set the grade
    void Homework::setGrade(){
        
    }
    
    //set if assignment was completed
    void Homework::setCompleteAssign(){
        
    }
  
    
}

