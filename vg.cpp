#include "vg.h"
#include <iostream>
#include <cstring>

using namespace std;
vg::vg(char* newTitle, char* newPublisher, int newYear, int newRating):media(newTitle, newYear) {
  publisher = newPublisher;
  rating = newRating;
  type = 0;
}

char* vg::getPublisher() {
  return publisher;
}
int vg::getRating() {
  return rating;
}
vg::~vg() {
  delete publisher;
}
