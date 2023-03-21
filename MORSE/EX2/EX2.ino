/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
const int pin = 8;   // pin for speaker

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //I   ** Isac guapo aprobam **
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //S
  punt();
  punt();
  punt();
  //Espai entre lletres
  espaiL();  
  //A
  punt();
  ratlla();
  //Espai entre lletres
  espaiL();
  //A
  punt();
  ratlla();
  //Espai entre lletres
  espaiL();  
  //C
  ratlla();
  punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //Espai entre paraules
  espaiP();

   //G
  ratlla();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //U
  punt();
  punt();
  ratlla();
  //Espai entre lletres
  espaiL();
    //A
  punt();
  ratlla();
  //Espai entre lletres
  espaiL();
    //P
  punt();
  ratlla();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();  
  //O
  ratlla();
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
    //Espai entre paraules
  espaiP();
  
    //A
  punt();
  ratlla();
  //Espai entre lletres
  espaiL();
    //P
  punt();
  ratlla();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //R
  punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //O
  ratlla();
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
  //B
  ratlla();
  punt();
  punt();
  punt();
  //EspaI entre lletres
  espaiL();
    //A
  punt();
  ratlla();
  //Espai entre lletres
  espaiL();
  //M
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
    //Espai entre paraules
  espaiP();

}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}
