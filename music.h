#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include <cstring>
#include "media.h"
using namespace std;
class music : public media {
 public:
  music(char* newTitle, char* newArtist, char* newPublisher, int newYear, float newDuration);
  virtual char* getArtist();
  virtual float getDuration();
  virtual char* getPublisher();
  ~music();
 private:
  char* artist;
  float duration;
  char* publisher;
};
#endif
