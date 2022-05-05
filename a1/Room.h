#include <string>

using namespace std;

class Room{


    string name;
    int capacity;
    int computers;
    bool whiteboard;

  public:

    Room();
    Room(string n, int cap, int comp, bool w);
    Room(Room&);

    inline string getName(){ return name; }
    inline int getCap(){ return capacity; }
    inline int getComp(){ return computers; }
    inline bool hasWhiteboard(){ return whiteboard; }

    inline void setName(string n){ name = n; }
    inline void setCap(int c){ capacity = c; }
    inline void setComp(int c){ computers = c; }
    inline void setWhiteboard(bool w){ whiteboard = w; }

    bool meetsCriteria(int cap, int comp, bool w);
    bool lessThan(Room&);

    void print();

};
