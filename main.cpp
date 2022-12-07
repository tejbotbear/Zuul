/*
Tej Hiremath
-
-
*/

#include <iostream>
#include <vector>
#include <map>
#include "room.h"
#include "items.h"

using namespace std;

void CreateRooms(vector <Rooms*> &RoomVect);

int main() {
  vector <Rooms*> RoomVect;
  map<string, string> Exits;
  CreateRooms(RoomVect);
}

void CreateRooms(vector <Rooms*> &RoomVect, map <string, string> Exits) {

  Rooms* OneTwenty = new Rooms();
  OneTwenty->name = "OneTwenty";
  OneTwenty->description = "Starting room description";
  RoomVect.push_back(OneTwenty);
  //Exits
  Exits["OneTwenty"] = "WEST";
  std::cout << "The exit marked to OneTwenty is " << Exits.find("OneTwenty") << endl;


  /*Rooms* OneHall = new Rooms();
  OneHall->name = "One Hall";
  OneHall->description = "One hall description holder";
  //Exits holder if needed from map
  RoomVect.push_back(OneHall);
  */
}
