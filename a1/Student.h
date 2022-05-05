#include <string>

using namespace std;

class Student {

    string name;
    string number;

  public:
    Student();
    Student(Student&);

    bool lessThan(Student& s);

    inline string getName(){ return name; }
    inline string getNumber(){ return number; }

    inline void setName(string s){ name = s; }
    inline void setNumber(string s){ number = s; }

    void print();
};
