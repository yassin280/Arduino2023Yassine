/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte led5 = 12;          
int temps = 400;
int i=0;
//********** Setup ****************************************************************
void setup()
{

pinMode(led5, OUTPUT);
  while(i<=30)
  {
   
    digitalWrite(led5, HIGH);    // posar a 5V el pin 12
    delay(temps);                  // es queden leds 500ms encesos
    digitalWrite(led5, LOW);     // posar a 0V el pin 12
    delay(temps);                  // es queden leds 500ms apagats
   i++;
  }

}

//********** Loop *****************************************************************
void loop()
{
       

}

//********** Funcions *************************************************************