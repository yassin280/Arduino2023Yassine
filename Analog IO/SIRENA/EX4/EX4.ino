/**********************************************************************************
**                                                                               **
**                             Sirena                                            **
**                          YASSINE ZIANI                                        **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const byte xiu = 9; // donar nom al pin 9 de l’Arduino
const byte pot0 = A0; // donar nom al pin A0 de l’Arduino
int valPot0; // guardar valor del potenciometre
//********** Setup ****************************************************************
void setup()
{
pinMode(xiu, OUTPUT); 
}
//********** Loop *****************************************************************
void loop()
  {

  tone(xiu, 1000, 1000); 
  delay(1000); 
  tone(xiu, 1250, 1000);
  delay(1000); 
  }
//********** Funcions *************************************************************