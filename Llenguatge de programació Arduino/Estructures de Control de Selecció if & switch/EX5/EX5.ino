/**********************************************************************************
** **
** Control Structures **
** **
** **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
float kgco2 = 45;
//********** Setup ****************************************************************
void setup() // run once, when the sketch starts
{
Serial.begin(9600); // set up Serial library at 9600 bps
if (kgco2 < 3.5)
{
Serial.print("Cualificacion A");
}
else if (kgco2 <6.5)
{
Serial.print("Cualificacion B");
}
else if (kgco2 <11.1)
{
Serial.print("Cualificacion C");
}
else if (kgco2 <17.71)
{
Serial.print("Cualificacion D");
}
else if (kgco2 <38.2)
{
Serial.print("Cualificacion E");
}
else if (kgco2 <43.2)
{
Serial.print("Cualificacion F");
}
else if (kgco2 >=43.2)
{
Serial.print("Cualificacion G");
}
}
//********** Loop *****************************************************************
void loop() // we need this to be here even though its empty
{
}
//********** Funcions *************************************************************
