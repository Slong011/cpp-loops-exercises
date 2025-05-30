#include <iostream>                    
#include "CTurtle.hpp"                 
#include "CImg.h"                      
using namespace cturtle;               
using namespace std;                   


int main(int argc, char** argv) {
  
  TurtleScreen screen(400, 300); 
  Turtle tina(screen);
  
  tina.pencolor({"purple"});
  tina.shape("TRIANGLE");
  tina.speed(TS_FAST);

  int count = 0;
  
  while (count < 4) {

     tina.forward(100); // Long line
      tina.right(90);

      tina.forward(30);  // Small line
      tina.right(90);

      tina.forward(30);  // Small line
      tina.right(90);

      tina.forward(30);  // Small line

      count++;

  }
  
  screen.exitonclick();
  return 0;
  
}
