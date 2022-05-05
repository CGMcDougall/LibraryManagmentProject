#include "Date.h"
#include "Room.h"
#include "Student.h"

#include <iostream>

using namespace std;

class Reservation {

  public:

    Reservation(Student*,Room*,Date&);

    inline Student getStudent(){ return s; }
    inline Room getRoom(){ return r; }
    inline Date getDate(){ return d; }

    bool lessThan(Reservation&);
    bool overlaps(const string&, Date&);
    void print();


  private:
    Student s;
    Room r;
    Date d;

};
