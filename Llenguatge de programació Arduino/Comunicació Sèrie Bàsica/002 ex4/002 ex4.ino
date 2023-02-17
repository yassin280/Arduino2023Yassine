/********************************************************************************
**                                                                              **
**                            Serial Potter                                     **
**                                                                              **
**                                                                              **
*********************************************************************************/

//********* Includes *************************************************************

//********** Variables ***********************************************************
//********** Setup ***************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps 
  Serial.println("Escull numero d'operacio que vols realitzar?");
  Serial.println("  1. Comprobar numero de targeta de credit");
  Serial.println("  2. Comprobar numero de compte bancari");
  Serial.println("  3. Buscar un digit perdut de targeta de credit");

}
 
//********* Loop *****************************************************************
void loop ()
{  

  
    delay(1000);
}
//********* Funcions *************************************************************
