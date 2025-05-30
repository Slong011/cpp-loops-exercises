#include <iostream>                    
#include "CTurtle.hpp"                 
#include "CImg.h"                      
using namespace cturtle;               
using namespace std;                   


int main(int argc, char** argv) {
  
  TurtleScreen screen(400, 300); 
  Turtle tina(screen);
  
  tina.pencolor({"green"});
  tina.shape("ARROW");
  tina.speed(TS_NORMAL);

  int count = 0;
  
  while (count < 360) {

     tina.forward(20);
      tina.right(20);

      count++;

  }
  
  screen.exitonclick();
  return 0;
  
}
