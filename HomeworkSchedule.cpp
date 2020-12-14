
#include <string>
#include <map>
using namespace std;

class HomeworkSchedule: public Homework{
    map<Homework, int> assignmentsMap;

//method to add a new assignment to the map
    public void addAssignment(string name, String dueDate){
        Homework assignmentsMap = new Homework(name, dueDate, null, null, null, false)
    }
// update assignment
    public void updateAssignment(){

    }

//complete an assignment
    public void completeAssignment(Homework h){
        h.setCompleteAssign(true);

    }
// list total  number of assignments
    public void getAssignments(){
        return assignmentsMap.size();
    }
}
