/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Uso de la pantalla LCD sin interfaz I2C
   Fabian Andree Sinay Canel
   Fecha: 18 de mayo
   
*/

//Librerias
#include <LiquidCrystal.h>


//Definiciones de preprocesador
#define RS  6
#define Enable 7
#define D4 2
#define D5 3
#define D6 4
#define D7 5

//Constructor
LiquidCrystal LCD(RS, Enable, D4, D5, D6, D7); //Constructor que me permite usar la LCD



void setup()
{
  LCD.begin(16,2); //Objeto de una LCD de 16 columnas x 2 filas
  LCD.setCursor(0,0);
  LCD.print("Fabian Sinay");
  LCD.setCursor(0,2);
  LCD.print("2020175");
}
void loop()
{

}