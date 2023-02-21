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
Serial.print ("Your HD is ");
Serial.print(drive_gb);
Serial.println (" GB large.");
Serial.print("In theory, it can store ");

drive_mb= drive_gb;
drive_mb= (drive_mb * 1024);
Serial.print (drive_mb);
Serial.print (" Megabytes, ");

drive_kb= (drive_mb * 1024);
Serial.print(drive_kb);
Serial.println(" Kilobytes.");
Serial.print("But it really only stones ");

real_drive_mb= (100000);
Serial.print(real_drive_mb);
Serial.print (" Megabytes, ");

real_drive_kb= (real_drive_mb * 1000);
Serial.print(real_drive_kb);
Serial.println(" Kilobytes");
Serial.print("Your are missing ");
Serial.print(drive_kb - real_drive_kb);
Serial.print (" kilobytes!");





}

//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************