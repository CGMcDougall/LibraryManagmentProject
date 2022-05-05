#include "Library.h"


Library::Library(){

  sn = 0;
  resn = 0;
  rn =0;

  students= new Student*[MAX_SIZE];
  res = new Reservation*[MAX_SIZE];


}

Library::~Library(){

    for(int i = 0; i < sn; i++)delete students[i];
    for(int i = 0; i < resn; i++)delete res[i];
    for(int i = 0; i < rn; i++)delete rooms[i];
    delete [] students;
    delete [] res;



}

bool Library::addStudent(const string& n, const string& num){

    if(sn +1 >= MAX_SIZE)return false;

    Student* s = new Student();
    s->setName(n);
    s->setNumber(num);
    students[sn] = s;
    sn++;
    return true;
}

bool Library::addRoom(string n, int cap, int comp, bool w){

    if(rn +1 > MAX_SIZE)return false;

    Room* r = new Room(n,cap,comp,w);
    rooms[rn] = r;
    rn++;
    return true;

}

bool Library::getStudent(const string& name, Student** stu){

    for(int i = 0; i < sn; i++){
        if(name.compare(students[i]->getName())){
            *stu = students[i];
            return true;
        }
    }
    cout<<"Student not found"<<resn<<endl;
    return false;
}

bool Library::getRoom(const string& name, Room** room){

    for(int i = 0; i < rn; i++){


        if(name == (rooms[i]->getName())){
          *room = rooms[i];
          return true;
        }

    }
    cout<<"Room not found"<<resn<<endl;
    return false;
}

bool Library::isFree(const string& room, Date& d){

    Room* r;
    if(getRoom(room,&r) == false)return false;


    for(int i = 0; i < resn; i++){
      if(res[i]->overlaps(room,d))return false;
    }
    return true;
}

bool Library::makeReservation(const string& st, const string& room, Date& d){
    Student* s;
    Room* r;

    // cout<<getStudent(st,&s)<<endl;
    // cout<<getRoom(room,&r)<<endl;
    if(getStudent(st,&s) == false || getRoom(room,&r) == false)return false;

    if(resn+1 >= MAX_SIZE || isFree(room,d) == false)return false;


    Reservation* a = new Reservation(s,r,d);
    res[resn] = a;
    resn++;
    return true;
}

void Library::printReservations(){



    for(int i = 0; i < resn; i++){

        res[i]->print();
        cout<<endl;
    }


}
