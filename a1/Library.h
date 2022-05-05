  // #include "Student.h"
// #include "Room.h"
#include "Reservation.h"


#define MAX_SIZE  10

using namespace std;

class Library {

  public:
    Library();
    ~Library();

    bool addStudent(const string& name, const string& number);
    bool addRoom(string n, int cap = 1, int comp = 0, bool w = false);

    bool getStudent(const string& name, Student** st);
    bool getRoom(const string& roomName, Room** room);

    bool isFree(const string& room, Date&);

    bool makeReservation(const string& student, const string& room, Date&);

    void printReservations();


  private:
    Student** students;
    int sn;
    Reservation** res;
    int resn;
    Room* rooms[MAX_SIZE];
    int rn;

};
