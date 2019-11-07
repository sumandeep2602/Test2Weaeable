#include <InternetButton.h>


InternetButton button = InternetButton();
void setup() {
  button.begin();

   //Particle.function("answer", showCorrectOrIncorrect);
  
  
  Particle.function("controlLights", controlLights);

  // Show a visual indication to the player that the Particle
  // is loaded & ready to accept inputs
  for (int i = 0; i < 3; i++) {
    button.allLedsOn(20,0,0);
    delay(250);
    button.allLedsOff();
    delay(250);
  }
}




int controlLights(String cmd) 
{
    
    

    for(int i = 0; i<=20; i+4)
    {
    
        if (cmd == "0") {
      
   //   button.ledOn();
         //button.ledOn(0, 0, 0, 255); 
          // button.ledOn(2, 0, 0, 255); 
             button.ledOn(4, 0, 0, 255); 
             button.ledOn(6, 0, 0, 255); 
                button.ledOn(8, 0, 0, 255); 
                 //  button.ledOn(1, 0, 0, 255); 
           button.ledOn(3, 0, 0, 255); 
             button.ledOn(5, 0, 0, 255); 
               button.ledOn(7, 0, 0, 255); 
                button.ledOn(9, 0, 0, 255); 
                // button.ledOn(10, 0, 0, 255); 
                // button.ledOn(11, 0, 0, 255); 
                // button.ledOn(12, 0, 0, 255); 
                 Particle.publish("beamStatus","intact",60,PRIVATE);
                 // button.ledOn(10, 0, 0, 255);
    //button.allLedsOn(0,0,255);
    
    
    
    
    return 1;
  }
  else if (cmd == "5") {
      
           button.ledOn(4, 0, 0, 255); 
            button.ledOn(5, 0, 0, 255); 
           button.ledOn(6, 0, 0, 255); 
           button.ledOn(7, 0, 0, 255); 
               button.ledOn(8, 0, 0, 255); 
             //button.ledOn(9, 0, 0, 255); 
               //button.ledOn(10, 0, 0, 255); 
              //  button.ledOn(9, 0, 0, 255); 
               Particle.publish("beamStatus","intact",60,PRIVATE);
               
                
                 // button.ledOn(10, 0, 0, 255);
   // button.allLedsOff();
    return 1;
  }
   else if (cmd == "9") {
      
      
            button.ledOn(5, 0, 0, 255); 
           button.ledOn(6, 0, 0, 255); 
             button.ledOn(7, 0, 0, 255); 
               //button.ledOn(10, 0, 0, 255); 
              //  button.ledOn(9, 0, 0, 255); 
               Particle.publish("beamStatus","intact",60,PRIVATE);
               
                
                 // button.ledOn(10, 0, 0, 255);
   // button.allLedsOff();
    return 1;
  }
   else if (cmd == "13") {
      
      
            //button.ledOn(5, 0, 0, 255); 
           button.ledOn(6, 0, 0, 255); 
             //button.ledOn(7, 0, 0, 255); 
               //button.ledOn(10, 0, 0, 255); 
              //  button.ledOn(9, 0, 0, 255); 
               Particle.publish("beamStatus","intact",60,PRIVATE);
               
                
                 // button.ledOn(10, 0, 0, 255);
   // button.allLedsOff();
    return 1;
  }
  else if (cmd == "17") {
      
      
            //button.ledOn(5, 0, 0, 255); 
           //button.ledOn(6, 0, 0, 255); 
             //button.ledOn(7, 0, 0, 255); 
               //button.ledOn(10, 0, 0, 255); 
              //  button.ledOn(9, 0, 0, 255); 
              button.allLedsOff();
               Particle.publish("beamStatus","intact",60,PRIVATE);
               
                
                 // button.ledOn(10, 0, 0, 255);
   // button.allLedsOff();
    return 1;
  }
  else if(cmd == "20")
  {
      button.allLedsOn(255, 0, 0);
  }
    }
}
  
  
  
