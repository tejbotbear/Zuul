#include <iostream>
#include <vector>

using namespace std;

class Rooms {
 public:
  char* name;
  char* description;
  bool Food = false;
  bool Pencil = false;
  bool Notebook = false;
  bool HallPass = false;
  bool Binder = false;
  map <char, Rooms*> RoomMap;

  Rooms() {
    name = new char[100];
    description = new char[100];
    RoomMap['N'] = NULL;
    RoomMap['W'] = NULL;
    RoomMap['E'] = NULL;
    RoomMap['S'] = NULL;
  }
  
};


