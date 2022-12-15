/*
Tej Hiremath
-
-
*/

#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include "room.h"

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

  ID = 1;
  Rooms* OneTwenty = new Rooms();
  OneTwenty->name = "OneTwenty";
  OneTwenty->description = "This is the computer lab at Sunset";
  //Hall pass item
  OneTwenty->HallPass = true;
  RoomVect.push_back(OneTwenty);
  
  ID = 2;
  Rooms* OneHall = new Rooms();
  OneHall->name = "One Hall";
  OneHall->description = "It seems like you can go anywhere from here.";
  RoomVect.push_back(OneHall);

  ID = 3;
  Rooms* Cafeteria = new Rooms();
  Cafeteria->name = "Cafeteria";
  Cafeteria->description = "Theres so many food options here!";
  // Food item
  Cafeteria->Food = true;
  RoomVect.push_back(Cafeteria);

  ID = 4;
  Rooms* TwoHall = new Rooms();
  TwoHall->name = "Two Hall";
  TwoHall->description = "This is a small hallway near the cafeteria.";
  RoomVect.push_back(TwoHall);

  ID = 5;
  Rooms* LowerCommons = new Rooms();
  LowerCommons->name = "Lower Commons";
  LowerCommons->description = "It seems this is where people come to meet with others.";
  RoomVect.push_back(LowerCommons);
  
  ID = 6;
  Rooms* NorthOneHall = new Rooms();
  NorthOneHall->name = "North One Hall";
  NorthOneHall->description = "This seems to be the north side of One Hall.";
  RoomVect.push_back(NorthOneHall);
  
  ID = 7;
  Rooms* MainHall = new Rooms();
  MainHall->name = "Main Hall";
  MainHall->description = "This is the main point of enterance/exit of the building";
  RoomVect.push_back(MainHall);

  ID = 8;
  Rooms* AHall = new Rooms();
  AHall->name = "A Hall";
  AHall->description = "This is the hall toward the north side of the school.";
  RoomVect.push_back(AHall);

  ID = 9;
  Rooms* Library = new Rooms();
  Library->name = "Library";
  Library->description = "There are a lot of textbooks in here.";
  Library->RoomMap['E'] = RoomVect[6];
  RoomVect.push_back(Library);

  ID = 10;
  Rooms* SouthOneHall = new Rooms();
  SouthOneHall->name = "South One Hall";
  SouthOneHall->description = "This is the southern side of One Hall.";
  RoomVect.push_back(SouthOneHall);

  ID = 11;
  Rooms* GHall = new Rooms();
  GHall->name = "G Hall";
  GHall->description = "This hallway is toward the south side of the school.;";
  RoomVect.push_back(GHall);

  ID = 12;
  Rooms* Bathroom = new Rooms();
  Bathroom->name = "Bathroom";
  Bathroom->description = "This is a bathroom.";
  RoomVect.push_back(Bathroom);

  ID = 13;
  Rooms* WaterFountain = new Rooms();
  WaterFountain->name = "Water Fountain";
  WaterFountain->description = "You can get drinking water here.";
  RoomVect.push_back(WaterFountain);

  ID = 14;
  Rooms* HHall = new Rooms();
  HHall->name = "H Hall";
  HHall->description = "This hallway is at the most southern part of the school.";
  RoomVect.push_back(HHall);

  ID = 15;
  Rooms* HHallEnd = new Rooms();
  HHallEnd->name = "H Hall End";
  HHallEnd->description = "This is the end of H Hall.";
  RoomVect.push_back(HHallEnd);

  ID = 16;
  Rooms* End = new Rooms();
  End->name = "The Exit";
  End->description = "You have reached the endpoint of the game!";
  RoomVect.push_back(End);


  OneTwenty->RoomMap['W'] 	= RoomVect[2];
  OneHall->RoomMap['N'] 	= RoomVect[6];
  OneHall->RoomMap['W'] 	= RoomVect[3];
  OneHall->RoomMap['E'] 	= RoomVect[1];
  OneHall->RoomMap['S'] 	= RoomVect[10];
  Cafeteria->RoomMap['N'] 	= RoomVect[5];
  Cafeteria->RoomMap['W'] 	= RoomVect[4];
  Cafeteria->RoomMap['E'] 	= RoomVect[2];
  TwoHall->RoomMap['E'] 	= RoomVect[3];
  LowerCommons->RoomMap['S'] 	= RoomVect[3];
  NorthOneHall->RoomMap['N'] 	= RoomVect[8];
  NorthOneHall->RoomMap['W'] 	= RoomVect[9];
  NorthOneHall->RoomMap['E'] 	= RoomVect[7];
  NorthOneHall->RoomMap['S'] 	= RoomVect[2];
  MainHall->RoomMap['N'] 	= RoomVect[16];
  MainHall->RoomMap['W'] 	= RoomVect[6];
  AHall->RoomMap['S'] 		= RoomVect[6];
  SouthOneHall->RoomMap['N'] 	= RoomVect[2];
  SouthOneHall->RoomMap['E'] 	= RoomVect[11];
  SouthOneHall->RoomMap['S'] 	= RoomVect[14];
  GHall->RoomMap['W'] 		= RoomVect[10];
  GHall->RoomMap['E'] 		= RoomVect[12];
  GHall->RoomMap['S'] 		= RoomVect[13];
  Bathroom->RoomMap['W'] 	= RoomVect[11];
  WaterFountain->RoomMap['N'] 	= RoomVect[11];
  HHall->RoomMap['N'] 		= RoomVect[10];
  HHall->RoomMap['S'] 		= RoomVect[15];
  HHallEnd->RoomMap['N'] 	= RoomVect[14];
  
  Game(RoomVect);
}

void Game(vector <Rooms*> &RoomVect) {
  char Input[100];
  int i = 0;
  int s;
  s = RoomVect.size();
  Rooms* NextRoom;
  Rooms* CurrentRoom;
  bool GameOver = false;
  char DirectionInput;
  bool ValidDirectionInput = false;
  bool LeaveInv = false;
  int InvCount = false;
  
  CurrentRoom = RoomVect[1];
  
  do {
    cout << "You are currently in room " << CurrentRoom->name << " ." << endl;
    cout << CurrentRoom->description << endl;
    cout << "The current items in the room are:" << endl;
    if (CurrentRoom->Food == true) {
      cout << "Food" << endl;
    }
    if (CurrentRoom->Pencil == true) {
      cout << "Pencil" << endl;
    }
    if (CurrentRoom->Notebook == true) {
      cout << "Notebook" << endl;
    }
    if (CurrentRoom->HallPass == true) {
      cout << "Hall Pass" << endl;
    }
    if (CurrentRoom->Binder == true) {
      cout << "Binder" << endl;
    }
    cout << "The exits from this room are:" << endl;
    NextRoom = CurrentRoom->RoomMap['N'];
    if(NextRoom != NULL){
      cout << "North: " << NextRoom->name << endl;
    }
    NextRoom = CurrentRoom->RoomMap['W'];
    if(NextRoom != NULL){
      cout << "West: " << NextRoom->name << endl;
    }
    NextRoom = CurrentRoom->RoomMap['E'];
    if(NextRoom != NULL){
      cout << "East: " << NextRoom->name << endl;
    }
    NextRoom = CurrentRoom->RoomMap['S'];
    if(NextRoom != NULL){
      cout << "South: " << NextRoom->name << endl;
    }

    do {
     cout << "What direction would you like to go? ('N', 'W', 'E', 'S'). For item interactions, enter 'I' to view your current inventory." << endl;
     cin >> DirectionInput; 
     if (DirectionInput == 'I') {
       do {
	 cout << "You are now in the inventory menu. To drop an item, enter 'D'. To pick up an item in this room, enter 'P'.";
	 cin >> DirectionInput;
	 if (DirectionInput == 'D') {
	   if (InvCount = 0) {
	     cout << "You have no items in your inventory!";
	   }
	   else {
	     cout << "What would you like to drop? Enter the first letter of the item to drop it.";
	     if (Inventory->Food == true) {
	       cout << "Food" << endl;
	     }
	     if (Inventory->Pencil == true) {
	       cout << "Pencil" << endl;
	     }
	     if (Inventory->Notebook == true) {
	       cout << "Notebook" << endl;
	     }
	     if (Inventory->HallPass == true) {
	       cout << "Hall Pass" << endl;
	     }
	     if (Inventory->Binder == true) {
	       cout << "Binder" << endl;
	     }
	     cin >> DirectionInput;
	     if (DirectionInput = 'F') {
	       if (RoomVect[0]->Food == true) {
		 cout << "Dropped the food." << endl;
	       }
	       else {
		 cout << "You do not have this item in your inventory!" << endl;
	       }
	     }
	     if (DirectionInput = 'P') {
	       if (Inventory->Pencil true) {
		 cout << "Dropped the pencil." << endl;
	       }
	       else {
		 cout << "You do not have this item in your inventory!" << endl;
	       }
	     }
	     if (DirectionInput == 'N') {
	       if (Inventory->Notebook = true) {
		 cout << "Dropped the notebook." << endl;
	       }
	       else {
		 cout << "You do not have this item in your inventory!" << endl;
	       }
	     }
	     if (DirectionInput == 'H') {
	       if (Inventory->HallPass == true) {
		 cout << "Dropped the hallpass." << endl;
	       }
	       else {
		 cout << "You do not have this item in your inventory!" << endl;
	       }
	     }
	     if (DirectionInput == 'B') {
	       if (Inventory->Binder == true) {
		 cout << "Dropped the binder." << endl;
	       }
	       else {
		 cout << "You do not have this item in your inventory!" << endl;
	       }
	     }
	   }
	 } while(LeaveInv == false);
       }

     if (DirectionInput == 'N') {
	NextRoom = CurrentRoom->RoomMap['N'];
	if (NextRoom == NULL) {
	  cout << "There is no room north of here." << endl;
	}
	else {
	  ValidDirectionInput = true;
	}
      }
      if (DirectionInput == 'W') {
	NextRoom = CurrentRoom->RoomMap['W'];
	if (NextRoom == NULL) {
	  cout << "There is no room west of here." << endl;
	}
	else {
	  ValidDirectionInput = true;
	}
      }
      if (DirectionInput == 'E') {
	NextRoom = CurrentRoom->RoomMap['E'];
	if (NextRoom == NULL) {
	  cout << "There is no room east of here." << endl;
	}
	else {
	  ValidDirectionInput = true;
	}
      }
      if (DirectionInput == 'S') {
	NextRoom = CurrentRoom->RoomMap['S'];
	if (NextRoom == NULL) {
	  cout << "There is no room south of here." << endl;
	}
	else {
	  ValidDirectionInput = true;
	}
      }
    } while(ValidDirectionInput == false);
      ValidDirectionInput = true;

    CurrentRoom = NextRoom;
    if (!strcmp(CurrentRoom->name, RoomVect[16]->name)) {
      GameOver = true;
    }
  } while(GameOver == false);
}
