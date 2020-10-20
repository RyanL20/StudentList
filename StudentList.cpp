#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

struct student{
  char* first_name;
  char* last_name;
  int  id;
  float gpa;
};
void add_student(vector<student*>*);
void print_student(vector<student*>*);
void delete_student(vector<student*>*);

vector<student*>* list = new vector<student*>();

int main() {
  char input[80];
  bool exit = 0;

  //Instructions
  cout << "--------------------------" << endl;
  cout << "Student List Instructions:" << endl;
  cout << "ADD to add student" << endl;
  cout << "PRINT to print student" << endl;
  cout << "DELETE to delete student" << endl;
  cout << "QUIT to exit" << endl;
  cout << "--------------------------" << endl;
  while (exit == 0) {
    cout << "test" << endl;
    cin >> input;
    cout << input << endl;
    //checks if user typed ADD, PRINT, DELETE, QUIT, or something else
    if (input[0] == 'A' && input[1] == 'D' && input[2] == 'D') {
      cout << "Here" << endl;
      add_student(list);
	cout << list->size() << endl;
    }
    else if (input[0] == 'P' && input[1] == 'R' && input[2] == 'I' && input[3] == 'N' && input[4] == 'T' ) { 
      print_student(list);
    }
    else if (input[0] == 'D' && input[1] == 'E' && input[2] == 'L' && input[3] == 'E' && input[4] == 'T' && input[5] == 'E') {
      delete_student(list);
    }
    else if (input[0] == 'Q' && input[1] == 'U' && input[2] == 'I' && input[3] == 'T') {
      cout << "Exited Program" << endl;
      exit = 1;
    }
    
    else {
      cout << "Incorrect Input; ADD, PRINT, DELETE, or QUIT" << endl;
    }
  }
  return 0;
}
 

//add student
void add_student(vector<student*>* paramlist) {
  cout << "here" << endl;
  student* new_student = new student();
  //adds first name
  new_student->first_name = new char[80];
  cout << "Enter Student's First Name:" << endl;
  cin >> new_student->first_name;
  //adds last name
  new_student->last_name = new char[80];
  cout << "Enter Student's Last Name:" << endl;
  cin >> new_student->last_name;
  //adds id
  cout << "Enter Student's ID Number:" << endl;
  cin >> new_student->id;
  //adds gpa
  cout << "Enter Student's GPA:" << endl;
  cin >> new_student->gpa;
  cout << "Student Added" << endl;
  
  paramlist->push_back(new_student);
}

//print all students
void print_student(vector<student*>* paramlist) {
  for(int i = 0; i < list->size(); i++) {  
  cout << list->at(i)->first_name << " " << list->at(i)->last_name << ", " << list->at(i)->id << ", " << list->at(i)->gpa << endl;
  }
}


void delete_student(vector<student*>* paramlist) {
  /*student* remove_student = delete student.id();
    
    student.erase(
		 remove_if(student.begin(), student.end(), [&](student) {
		   return student.id == id;
		 }),
		 student.end());
  */
  cout << "Enter Student's ID Number To Delete:" << endl; 
}

