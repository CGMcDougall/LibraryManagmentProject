#include "Room.h"
#include <iostream>

Room::Room(){
  name = "name";
  capacity = -1;
  computers = -1;
  whiteboard = false;
}


Room::Room(string n, int cap, int comp, bool w){

    name = n;
    capacity = cap;
    computers = comp;
    whiteboard = w;

}

Room::Room(Room& r){

  name = r.name;
  capacity = r.capacity;
  computers = r.computers;
  whiteboard = r.whiteboard;

}



bool Room::meetsCriteria(int cap, int comp, bool w){

  if(capacity < cap)return false;
  if(computers < comp)return false;
  if(whiteboard != w && w == true)return false;

  return true;
}

bool Room::lessThan(Room& r){

  if(name<r.getName() == 1)return true;
  return false;

}

void Room::print(){
  cout<<"Room "<<name<<". Cap:"<<capacity<<" Comp:"<<computers<<" whiteboards: "<<whiteboard<<endl;


}
