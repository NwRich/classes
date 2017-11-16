/*Nicholas Rich
11/16/2017
allows the user to manage a list of differnt types of media.
 */
#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"//including media
#include "vg.h"//including video games
#include "music.h"//including music
#include "movie.h"//including movies

using namespace std;
void add(vector <media*> &list);//creating the method for adding media
void searching(vector<media*> &list);//creating the method for searching the media
void remove(vector<media*> &list);
int main() {
  bool working = true;//used for the while loop
  char* h;//used to select an operation
  vector <media*> list;//creating the vector of media
  while (working = true) {//while you are using the program
    cout << "add? search? delete? or quit?" << endl; //promt the user for an input
    cin.getline(h,80);//get the input
    if (strcmp(h, "add") == 0) {//if the input is add
      add(list);//add
    }
    if (strcmp(h, "search") == 0) {//if the input is search
      searching(list);//search
    }
    if (strcmp(h, "delete") == 0) {//if the input is delete
      remove(list);//remove
    }
    if (strcmp(h, "quit") == 0) {//if the input is quit
      return 0;//quit
    }
  }
  return 0;
}
void add(vector <media*> &list) {
  char* c;//c for chose
  char* t = new char[80];//t for title
  int y;//y for year
  cout << "video game? music? or movie?" << endl;//prompt the user for an input
  cin.get(c,80);//write to chose
  cin.get();//clearing the buffer
  if (strcmp(c, "video game") == 0) {//if the choice is video game
    int r;//r for rating
    char* p = new char[80];//p for publisher
    cout << "what is the title of the game?" << endl;//promt the user for an input
    cin.getline(t,80);//write to t
    cout << "What is the year the game was made?" << endl;//promt the user for an input
    cin >> y;//write to y
    cin.get();//clear the buffer
    cout << "Who is the publisher of the game" << endl;//promt the user for an input
    cin.get(p,80);//write to p
    cout << "What was the rating out of 100" << endl;//promt the user for an input
    cin >> r;//write to r
    cin.get();//clear the buffer
    vg* v = new vg(t,p,y,r);//creating a video game with the inputs
    list.push_back(v);//adding to the list
  }
  if (strcmp(c, "music") == 0) {//if the choice is music
    char* a = new char[80];//a for artist
    float d;//d for duration
    char* p = new char[80];//p for publisher
    cout << "what is the name of the song?" << endl;//promt the user for an input
    cin.getline(t,80);//write to t
    cout << "what is the year the song was published?" << endl;//promt the user for an input
    cin >> y;//write to y
    cin.get();//clear the buffer
    cout << "who is the artist of the song?" << endl;//promt the user for an input
    cin.get(a,80);//write to a
    cin.get();//clear the buffer
    cout << "what is the duration of the song?" << endl;//promt the user for an input
    cin >> d;//write to d
    cin.get();//clear the buffer
    cout << "who is the publisher of the song?" << endl;//promt the user for an input
    cin.get(p,80);//write to p
    cin.get();//clear the buffer
    music* m = new music(t,a,p,y,d);//create new media under the music child
    list.push_back(m);//add to the list
  }
  if (strcmp(c, "movie") == 0) {//if the choice is video game
    char* di = new char[80];//di for director
    float d;//d for duration
    int r;//r for rating
    cout << "what is the name of the movie?" << endl;//promt the user for an input
    cin.getline(t,80);//write to t
    cout << "who is the director of the movie?" << endl;//promt the user for an input
    cin.get(di,80);//write to di
    cin.get();//clear the buffer
    cout << "what year did the movie come out?" << endl;//promt the user for an input
    cin >> y;//write to y
    cin.get();//clear the buffer
    cout << "how long is the movie?" << endl;//promt the user for an input
    cin >> d;//write to d
    cin.get();//clear the buffer
    cout << "how is the movies rating out of 100?" << endl;//promt the user for an input
    cin >> r;//write to r
    cin.get();//clear the buffer
    movie* mv = new movie(t,di,d,y,r);//create new media under the child movie
    list.push_back(mv);//add movie to the list
  }
} 
void searching(vector<media*> &list) {//searching method
  char* input = new char[80];//used to chose which search
  int i = 0;//used to hold the year
  char* t = new char[80];//used to hold the title
  cout << "search by year or by title?" << endl;//ask the user to search for title or by year
  cin.getline(input, 80);//get the response
  //clear the buffer
  if (strcmp(input, "year") == 0) {//if the choice was year
    cout << "what year?" << endl;//ask what year
    cin >> i;//write the year to i
    cin.get();//clear the buffer
  }
  if (strcmp(input, "title") == 0) {//if the input was title
    cout << "what is the title" << endl;//ask for the title
    cin.getline(t,80);//write title to t
  }
  for (vector<media*>::iterator it = list.begin(); it != list.end(); it++) {//creating the iterator
    if (((*it)->getType() == 0) && ((((*it)->getYear()) == i) || (strcmp((*it)->getTitle(), t) == 0))) {//if the media is a video game and is equal to the year or title print it out
      cout << "Title: " << (*it)->getTitle() << " Year: ";
      cout << (*it)->getYear() << " Publisher: ";
      cout << (*it)->getPublisher() << " Rating: ";
      cout << (*it)->getRating() << endl;
    }
    else if (((*it)->getType() == 1) && ((((*it)->getYear()) == i) || (strcmp((*it)->getTitle(),t) ==0))) {//if the media is music and is equal to the year or the title print it out
      cout << "Title: " << (*it)->getTitle() << " Year: ";
      cout << (*it)->getYear() << " Artist: ";
      cout << (*it)->getArtist() << " Duration: ";
      cout << (*it)->getDuration() << " Publisher: ";
      cout << (*it)->getPublisher() << endl;
    }
    else if (((*it)->getType() == 2) && ((((*it)->getYear()) == i) || (strcmp((*it)->getTitle(),t) == 0))) {//if the media is a movie and is equal to the year or title print it out
      cout << "Title: " << (*it)->getTitle() << " Director: ";
      cout << (*it)->getDirector() << " Duration: ";
      cout << (*it)->getDuration() << " Year: ";
      cout << (*it)->getYear() << " Rating: ";
      cout << (*it)->getRating() << endl;
    }
  }
}

void remove(vector <media*> &list) {//remove method
  char* input;//used to get the hold user input
  int y = 0;//y for year
  char* ti = new char[80];//ti for title
  cout << "Delete by year or by title" << endl;//promt the user for an input
  cin >> input;//write the response to input
  cin.get();//clearing the buffer
  if(strcmp(input, "year") == 0) {//if the choice was year
    cout << "what year?" << endl;//ask what year
    cin >> y;//write to y
    cin.get();//clear the buffer
  }
  if (strcmp(input, "title") == 0) {//if the choice was title
    cout << "what is the title?" << endl;//ask for the title
    cin.getline(ti,80);//write to ti
  }
  for (int i = 0; i <= list.size(); i++) {
    for (vector<media*>::iterator it = list.begin(); it != list.end(); it++) {//creating an iterator
      if(((*it)->getYear() == y) || (strcmp((*it)->getTitle(), ti) == 0)) {//if the media has the same year or title
	if ((*it)->getType() == 0) {
	  delete static_cast<vg*>(*it);
	}
	if ((*it)->getType() == 1) {
	  delete static_cast<music*>(*it);
	}
	if ((*it)->getType() == 2) {
	  delete static_cast<movie*>(*it);
	}
	list.erase(it);//deleting the memory
	break;//breaking the for loop
      }
    }
  }
}
# classes
