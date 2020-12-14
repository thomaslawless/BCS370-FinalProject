#include <iostream>

using namespace std;

class Assignment
{
    string name;
	int days;
	public:
	    void getName(){
	        getline(cin,name);
	    }
	    void getDays(){
	        cin>>marks;
	    }
	    void displayAssignment()
	   {
	       cout<<"Name: "<<name<<endl;
	       cout<<"Days: "<<marks<<endl;
	   }
};

int main()
{
    cout<<"Enter 1 to add/update an assignment, Enter 2 to Search and Look Up Assignments, Enter 3 to Exit"<<endl;
    cin<<answer;
    Assignment st[10];
    if (answer==1){
        cout<<"Enter where you want this to go in the array out of 10. WARNING: Will overwrite any current assignment"<<endl;
        cin<<i;
        cout<<"Enter a name"<<endl;
        st[i].getName();
        cout<<"Enter the days away it is"<<endl;
        st[i].getDays();
    }
    if (answer==3){
        break;
    }
	return 0;
}