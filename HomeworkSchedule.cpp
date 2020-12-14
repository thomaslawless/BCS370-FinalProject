
#include <string>
#include <map>
using namespace std;

class HomeworkSchedule: public Homework{
    map<Homework, int> assignmentsMap;
    public int id = rand() % 100;
    std::map<Homework,int>::iterator it;
    
//method to add a new assignment to the map
    public void addAssignment(string name, String dueDate){
        Homework newAssignment = new Homework(name, dueDate, null, null, null, false)
        assignmentsMap.insert(newAssignment, id);
    }
    
// update assignment
    public void updateAssignment(Homework h, String name, String dueDate){
        h.setName(name);
        h.setDueDate(dueDate);
    }

//complete an assignment
    public void completeAssignment(Homework h){
        h.setCompleteAssign(true);
    }
    
// list total  number of assignments
    public void getAssignments(){
        return assignmentsMap.size();
    }
    
    public void searchCourse(String search){
        it = assignmentsMap.find(search);
        
        if (it == assignmentsMap.end()){
            cout << "Assignment does not exist";
        }else {
            cout << "The assignment exists";
        }
    }
}
