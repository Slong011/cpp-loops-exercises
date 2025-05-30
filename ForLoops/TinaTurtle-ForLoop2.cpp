#include <iostream>                    
#include "CTurtle.hpp"                
#include "CImg.h"                     
using namespace cturtle;          
using namespace std;                 

int main(int argc, char** argv) {
  
  TurtleScreen screen(400, 300); 
  Turtle tina(screen);

  tina.pencolor({"blue"});
  tina.shape("SQUARE");
  tina.speed(TS_FASTEST);

  for (int i = 0; i < 360; i++) {
     tina.forward(1);  
      tina.right(1);
  }

  screen.exitonclick();
  return 0;
  
}

