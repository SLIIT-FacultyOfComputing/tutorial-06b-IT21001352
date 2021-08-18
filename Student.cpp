#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sid,char sname[]) {
  studentId=sid;
  strcpy(name,sname);
  
}

// Display StudentId and Name
void Student::display(){
  cout<<"StudentId:"<<studentId<<endl<<
  "Student name:"<<name<<endl;
  
}
