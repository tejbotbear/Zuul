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
void Game (vector <Rooms*> &Roomvect, map <char[], char[]> Exits);

int main() {
  vector <Rooms*> RoomVect;
  map<int, string> Exits;
  CreateRooms(RoomVect);
}

void CreateRooms(vector <Rooms*> &RoomVect, map <char[], char[]> &Exits) {

  Rooms* OneTwenty = new Rooms();
  OneTwenty->name = "OneTwenty";
  OneTwenty->description = "You are currently in the OneTwenty lab at Sunset";
  RoomVect.push_back(OneTwenty);
  //Exits


  /*Rooms* OneHall = new Rooms();
  OneHall->name = "One Hall";
  OneHall->description = "One hall description holder";
  //Exits holder if needed from map
  RoomVect.push_back(OneHall);
  */
  Game(RoomVect, Exits);
}

void Game(vector <Rooms*> &RoomVect, map <char[], char[]> &Exits) {
  char Input[100];

  cout << OneTwenty->description;
  
}
