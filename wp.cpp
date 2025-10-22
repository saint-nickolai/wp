/*
  wp.cpp
  Waypoints for directories, just shortcuts to change directories presets in shorthand
  Nick Howard, Oct 21, 2025
*/

#include <string>
#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

/*
  Outline:
  If second argument is 'set' then write to a file and add a new present with the name and the absolute directory
  else, look up the name in the storagefile, and try to cd to that directory, if not, throw an error
*/


int main(int argc, char* argv[]) {

  FILE* sys;
  string arg = argv[1]; // gets the first argument passed in 

  if (arg == "set") { // if the argument is to set a waypoint
    ofstream fout("wpLocs", ios::app); // opens locs in append mode

    sys = popen("pwd", "r");
    char buffer[128];
    while (fgets(buffer, sizeof(buffer), sys) != NULL)
      fout << argv[2] << " " << buffer;
    fout.close();
  }

  else { // else argument isn't to set but to use a waypoint
    // teleport to waypoint after reading path from wpLocs
    cout << "im waypointing it" << endl;
  }

  pclose(sys);
  return EXIT_SUCCESS;
}
