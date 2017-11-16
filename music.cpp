#include "music.h"
#include <iostream>
#include <cstring>

using namespace std;
music::music(char* newTitle, char* newArtist, char* newPublisher, int newYear, float newDuration):media(newTitle, newYear) {
  artist = newArtist;
  publisher = newPublisher;
  duration = newDuration;
  type = 1;
}

char* music::getArtist() {
  return artist;
}
char* music::getPublisher() {
  return publisher;
}
float music::getDuration() {
  return duration;
}
music::~music() {
  delete artist;
  delete publisher;
}
