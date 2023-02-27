/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 80;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600); // set up Serial library at 9600 bpse4
  if (tempAigua < 90)
 {
    Serial.print("El agua todavia no esta bullint!");
 }
  else if (tempAigua >= 90 && tempAigua <100)
  {
    Serial.print("El agua esta a punt de bullir");
  }
  else if (tempAigua = 100 )
  {  
    Serial.print ("El agua esta a 100C");
  }    
   else
  {
    Serial.print("El agua esta bullint");
  }
  
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************