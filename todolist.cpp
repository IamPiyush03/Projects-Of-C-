//This is the C++ Code for a simplw To DO List

#include<iostream>
#include<string>
#define MAX 100
using namespace std;

class Task{
    public:
int id;
string name;        //Name of the task
string description; //Description of the task
bool completed;     //Status of the task

};


Task tasks[MAX];
int numTasks =0;

void displayMenu(){
cout<<"\n1.Add Task";
cout<<"\n2.Remove Task";
cout<<"\n3.View Task";
cout<<"\n4.Quit ";

cout<<"\n\nEnter your choice: ";
}

void addTask(){     //Function to ADD TASK
Task newTask;
cout<<"\nEnter the name of new task: ";
cin.ignore();
getline(cin,newTask.name);

cout<<"\nEnter the description of new task: ";
getline(cin,newTask.description);

newTask.id=numTasks+1;
newTask.completed=false;

tasks[numTasks]=newTask;
numTasks++;

}
void remTask(){   //Function to Remove Task
int taskId;
cout<<"Enter the task id you want to remove: ";
cin>>taskId;

int taskIndex=-1;

for(int i=0;i<=numTasks;i++){
if(tasks[i].id==taskId){
  taskIndex=i;
}
}
if(taskIndex!=-1){
for(int i=taskIndex;i<numTasks-1;i++){
tasks[i]=tasks[i+1];

}
numTasks--;
}else{
    cout<<"Tasks not found";
}
cout<<"Task removed succesfully";
}

void ViewTask(){   //Function to Remove Task
if(numTasks==0){
    cout<<"No tasks Found!!!";
}else{
cout<<"\nTASK LIST :";
for(int i=0;i<numTasks;i++){
cout<<"\n\nTask Id : "<<tasks[i].id;
cout<<"\n\nTask Name : "<<tasks[i].name;
cout<<"\n\nTask Description : "<<tasks[i].description;
cout<<"\n\nCompleted : "<<(tasks[i].completed? "YES" : "NO");
cout<<"\n----------------------------------------------------------------------------------------------"<<endl;
cout<<endl;
}

}

}

int main(){   //Main Function
int choice;
do{
displayMenu();
cin>>choice;
cin.ignore();

switch(choice){
case 1:
addTask();
break;
case 2:
remTask();
break;
case 3:
ViewTask();
break;
case 4:
cout<<"Exiting the Application...";
break;
default:
cout<<"Please Select a Appropriate choice";
break;
}
}while(choice!=4);

return 0;
}



