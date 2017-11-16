#include "movie.h"
#include <iostream>
#include <cstring>

using namespace std;
movie::movie(char* newTitle, char* newDirector, float newDuration, int newYear, int newRating):media(newTitle,newYear){
  director = newDirector;
  duration = newDuration;
  rating = newRating;
  type = 2;
}
char* movie::getDirector() {
  return director;
}
float movie::getDuration() {
  return duration;
}
int movie::getRating() {
  return rating;
}
movie::~movie() {
  delete director;
}
