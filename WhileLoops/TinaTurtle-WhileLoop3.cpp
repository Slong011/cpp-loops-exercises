#include <iostream>                    
#include "CTurtle.hpp"                 
#include "CImg.h"                      
using namespace cturtle;               
using namespace std;                   


int main(int argc, char** argv) {
  
  TurtleScreen screen(400, 300); 
  Turtle tina(screen);
  
  tina.pencolor({"red"});
  tina.shape("SQUARE");
  tina.speed(TS_SLOW);

   int i = 10;
  while (i <= 200) {
    tina.forward(i);
    tina.right(90);
    i+=10;

  }
  
  screen.exitonclick();
  return 0;
  
}
