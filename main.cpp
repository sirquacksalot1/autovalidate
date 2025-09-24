#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::transform;

const vector <string> VALIDATION = {"Cool","Great","Perfect","Beautiful","Aw, yeah"};

int main(){
  string input;
  int pick;

  srand(time(0));
  pick = rand() % VALIDATION.size();
  cout << "What are you listening to?\n";
  getline(cin,input);
  transform(input.begin(), input.end(), input.begin(), [](unsigned char c){ return std::tolower(c); });
  cout << VALIDATION[pick] << "! Let's listen to more\n";

  do{
    cout << "What's next?\n";
    getline(cin,input);
    transform(input.begin(), input.end(), input.begin(), [](unsigned char c){ return std::tolower(c); });
    pick = rand() % VALIDATION.size();
    cout << VALIDATION[pick] << "!\n";
  }while( input != "nothing" );

  return 0;
}