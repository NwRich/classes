#include "media.h"
#include <iostream>
#include <cstring>

using namespace std;

media::media(char* newTitle, int newYear) {
  title = newTitle;
  year = newYear;
  }

char* media::getTitle() {
  return title;
}

int media::getYear() {
  return year;
}
int media::getType() {
  return type;
}
char* media::getDirector() {
  return NULL;
}
float media::getDuration() {
  return NULL;
}
int media::getRating() {
  return NULL;
}
char* media::getArtist() {
  return NULL;
}
char* media::getPublisher() {
  return NULL;
}
media::~media() {
  delete title;
}
