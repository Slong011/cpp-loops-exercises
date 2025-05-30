#include <iostream>                    
#include "CTurtle.hpp"                
#include "CImg.h"                     
using namespace cturtle;          
using namespace std;                 

int main(int argc, char** argv) {
  
  TurtleScreen screen(400, 300); 
  Turtle tina(screen);

  tina.pencolor({"PURPLE"});
  tina.shape("TRIANGLE");
  tina.speed(TS_FAST);

  for (int i = 0; i < 4; i++) {
      tina.forward(100); // Long line
      tina.right(90);
      
      tina.forward(30);  // Small line
      tina.right(90);
      
      tina.forward(30);  // Small line
      tina.right(90);
      
      tina.forward(30);  // Small line
      tina.right(90);
  }

  screen.exitonclick();
  return 0;
  
}

