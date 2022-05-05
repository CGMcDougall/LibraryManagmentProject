#include "Reservation.h"


Reservation::Reservation(Student* s1, Room* r1, Date& d1){

  Student sa (*s1);
  Room ra (*r1);
  d.setDate(d1);
  s = sa;
  r = ra;
}


bool Reservation::lessThan(Reservation& r){
    Date e = r.getDate();
    return d.lessThan(e);
}


bool Reservation::overlaps(const string& a, Date& b){

    if(a == r.getName() && b.overlaps(d))return true;
    return false;
}

void Reservation::print(){
  s.print();
  r.print();
  d.print();

}
