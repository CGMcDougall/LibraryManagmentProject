#include "Student.h"
#include <iostream>


Student::Student(){
  name = "name";
  number = "-1";
}

Student::Student(Student& s){
  s.name = name;
  s.number = number;
}

bool Student::lessThan(Student& s){
    if(number < s.getNumber())return true;
    return false;

}

void Student::print(){

   cout<<"Student: "<<name<<" #"<<number<<endl;
}
