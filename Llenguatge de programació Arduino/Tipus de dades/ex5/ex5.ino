/**********************************************************************************
**                                                                               **
**                               Math Is Fun                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int a = 3;
int b = 4;
int h = 0;

//********** Setup ****************************************************************
void setup()
{
{
Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Calculo de hipotenusa: ");
h = sqrt(pow(a,2.0)+ pow(b,2.0));     //sqrt hace la raiz cuadrada del resultado

Serial.print("a=");
Serial.println(a);
Serial.print("b=");
Serial.println(b);                      //Serial print sirve para representar los datos en el monitor
Serial.print("h=");
Serial.println(h);

}

}

//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************
