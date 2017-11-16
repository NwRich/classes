#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include <cstring>
#include "media.h"
using namespace std;
class movie : public media {
 public:
  movie(char* newTitle, char* newDirector, float newDuration, int newYear, int newRating);
  virtual char* getDirector();
  virtual float getDuration();
  virtual int getRating();
  ~movie();
 private:
  char* director;
  float duration;
  int rating;
  
};
#endif
