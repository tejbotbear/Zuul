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
void Game(vector <Rooms*> &Roomvect);

int main() {
  vector <Rooms*> RoomVect;
  CreateRooms(RoomVect);
}

void CreateRooms(vector <Rooms*> &RoomVect) {

  int ID = 0;
  
  Rooms* Inventory = new Rooms();
  RoomVect.push_back(Inventory);
  
  Rooms* OneTwenty = new Rooms();
  ID = 1;
  OneTwenty->name = "OneTwenty";
  OneTwenty->description = "You are currently in the OneTwenty lab at Sunset";
  RoomVect.push_back(OneTwenty);
  

  Rooms* OneHall = new Rooms();
  ID = 2;
  OneHall->name = "One Hall";
  OneHall->description = "It seems like you can go anywhere from here.";
  RoomVect.push_back(OneHall);
  // Create prompt to grab hall pass.

  // HallPass = true;

  Rooms* Cafeteria = new Rooms();
  ID = 3;
  Cafeteria->name = "Cafeteria";
  Cafeteria->description = "Theres so many food options here!";
  RoomVect.push_back(Cafeteria);
  //Food = true;

  Rooms* LowerCommons = new Rooms();
  ID = 4;
  LowerCommons->name = "Lower Commons";
  LowerCommons->description = "There is open seating here.";
  RoomVect.push_back(LowerCommons);

  Rooms* MainHall = new Rooms();
  ID = 5;
  MainHall->name = "Main Hall";
  MainHall->description = "There are quite a few offices nearby.";
  RoomVect.push_back(MainHall);

  Rooms* MainOffice = new Rooms();
  ID = 6;
  MainOffice->name = "Main Office";
  MainOffice->description = "why are you in here? Are you in trouble?";
  RoomVect.push_back(MainOffice);
  //"assign pencil item"
  //Pencil = true;

  Rooms* SchoolExit = new Rooms();
  SchoolExit->name = "School Exit";
  SchoolExit->description = "You have left the school.";
  RoomVect.push_back(SchoolExit);
  
  Game(RoomVect);
}

void Game(vector <Rooms*> &RoomVect) {
  char Input[100];
  int i = 0;
  int s;
  s = RoomVect.size();
  for (int i = 0; i < s, i++;) {
    Rooms* Search = RoomVect[i];
    cout << Search->description << endl;
  }
}
