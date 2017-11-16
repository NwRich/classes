#ifndef VG_H
#define VG_H
#include <iostream>
#include <cstring>
#include "media.h"
using namespace std;
class vg : public media {
 public:
  vg(char* newTitle, char* newPublisher, int newYear, int newRating);
  virtual char* getPublisher();
  virtual int getRating();
  ~vg();
 private:
  char* publisher;
  int rating;
};
#endif
