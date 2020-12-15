#include <iostream>
#include <stdio.h>
using namespace std;

int choice;
string name;
int duedate;

cout<<"Welcome to the Assignments area, select from these choices:"<<endl;
cout<<"1) Add an Assignment 2)Display Assignment 3)View Completed Assignments"<<endl;
cin>>choice;

if(choice==1){
    cout<<"Enter the Name and date of the Assignment"<<endl;
    cin>>name;
    cin>>dueDate;
    addAssignment(name,dueDate);
}


if(choice==2){
    cout<<"The number of Assignments are: "<<endl;
    getAssignments();
    cout<<Which assignment would you like to look more in depth into?<<endl;
    displayAssignment(); //Have to still implement. This will use recursive to find a specifccode
}

if(choice==3){
    for(int i=0;i<assignmentMap.size[i]){
        if (assignmentMap==completed){
            cout<<"This assignment has been completed: "<<displayAssignment[i]<<endl;
        }
    }
}



