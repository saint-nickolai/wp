/*
  wp.cpp
  Waypoints for directories, just shortcuts to change directories presets in shorthand
  Nick Howard, Oct 21, 2025
*/

#include <string>
#include <iostream>
using namespace std;

/*
  Outline:
  If second argument is 'set' then write to a file and add a new present with the name and the absolute directory
  else, look up the name in the storagefile, and try to cd to that directory, if not, throw an error
*/


int main(int argc, char* argv[]) {
  string arg = argv[1];

  cout << arg << endl;
 
  return EXIT_SUCCESS;
}
