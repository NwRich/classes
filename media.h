#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <cstring>
using namespace std;
class media {
 public:
  char* getTitle();
  int getYear();
  int getType();
  virtual char* getDirector();
  virtual float getDuration();
  virtual int getRating();
  virtual char* getArtist();
  virtual char* getPublisher();
  media(char* newTitle, int newYear);
  ~media();
 protected:
  char* title;
  int year;
  int type;
};
#endif
