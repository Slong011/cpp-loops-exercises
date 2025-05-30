#include <iostream>
using namespace std;

int main() {

  srand(time(NULL));
  while (true) {
    cout << "The number generated is less than 90" << endl;
    int randNum = rand() % 100 + 1; // generate random number
    
    if (randNum > 90) {
      cout << "The number generated is more than 90" << endl;
      break;
    } 
  } 
  
  cout << "Now, the program has ended" << endl;
  
  return 0;

}
