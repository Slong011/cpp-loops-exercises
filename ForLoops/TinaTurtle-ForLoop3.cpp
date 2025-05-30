#include <iostream>                    
#include "CTurtle.hpp"                
#include "CImg.h"                     
using namespace cturtle;          
using namespace std;                 

int main(int argc, char** argv) {
  
  TurtleScreen screen(400, 300); 
  Turtle tina(screen);

  tina.pencolor({"orange"});
  tina.shape("ARROW");
  tina.speed(TS_SLOW);

  for (int i = 0; i < 40; i++) {
    tina.forward(i * 5);   // move forward increasing distance
    tina.right(90);        // 90 degree turn
  }

  screen.exitonclick();
  return 0;
  
}
