/**********************************************************************************
**                                                                               **
**                               Math Is Fun                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int drive_gb = 100;
long drive_mb, drive_kb, real_drive_mb, real_drive_kb, missing_drive_kb;

//********** Setup ****************************************************************
void setup()
{
Serial.begin (9600);
Serial.print ("El teu HD te ");
Serial.print(drive_gb);
Serial.println (" GB de mida.");
Serial.print("En teoria, podem emmagatzemar ");

drive_mb= drive_gb;
drive_mb= (drive_mb * 1024);
Serial.print (drive_mb);
Serial.print (" Megabytes, ");

drive_kb= (drive_mb * 1024);
Serial.print(drive_kb);
Serial.println(" Kilobytes.");
Serial.print("Pero realment podem emmagatzemar ");

real_drive_mb= (100000);
Serial.print(real_drive_mb);
Serial.print (" Megabytes, ");

real_drive_kb= (real_drive_mb * 1000);
Serial.print(real_drive_kb);
Serial.println(" Kilobytes");
Serial.print("Estem perdent ");
Serial.print(drive_kb - real_drive_kb);
Serial.print (" kilobytes!");





}

//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************