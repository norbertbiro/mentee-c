#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
  vector<string> stringContainer;
  string line;
  ifstream myfile("test.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) ) {
      stringContainer.push_back(line);
    }
    myfile.close();

    ofstream myfile("test.txt");
    for (string& line : stringContainer) {
      reverse(line.begin(), line.end());
      myfile << line << endl;
      cout << line << endl;
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}