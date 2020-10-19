#include <iostream>
#include <vector>

using namespace std;

struct student{
  char* first_name;
  char* last_name;
  int  id;
  float gpa;
};
void add_student(vector<student*>*);
void print_student();
void delete_student();


int main() {
  vector<student*>* list = new vector<student*>();
  add_student(list);
  cout << list->at(0)->first_name << ", " << list->at(0)->last_name << ", " << list->at(0)->id << ", " << list->at(0)->gpa << endl;
}

void add_student(vector<student*>* paramlist) {
  student* new_student = new student();
  //adds first name
  new_student->first_name = new char[80];
  cout << "Enter First Name:" << endl;
  cin >> new_student->first_name;
  //adds last name
  new_student->last_name = new char[80];
  cout << "Enter Last Name:" << endl;
  cin >> new_student->last_name;
  //adds id
  cout << "Enter ID Number:" << endl;
  cin >> new_student->id;
  //adds gpa
  cout << "Enter GPA:" << endl;
  cin >> new_student->gpa;

  paramlist->push_back(new_student);

  

  
}
