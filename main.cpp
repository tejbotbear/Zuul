/*
Tej Hiremath
-
-
*/

#include <iostream>
#include <vector>
#include "room.h"
#include "items.cpp"

using namespace std;

void CreateRooms(vector <Room*> &RoomVect)

int main() {
  vector <Room*> RoomVect;
  CreateRooms(RoomVect);
  
}

void CreateRooms(vector <Room*> &RoomVect) {

  Room* RM = new Room();
  RM->name = "OneTwenty";
  RM->description = "Starting room description";
  
  
}
