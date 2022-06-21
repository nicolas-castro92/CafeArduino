#include "Led.h"
#include "Temperatura.h"
#include "Luminocidad.h"
/**
   Clase que implementa la logica en el arduino
   @author Nicolás Castro
   @version 1.0
*/
int valor1 = 0;

class ControladorCafe {
    Led rojo;
    Led amarillo;
    Led verde;
    Temperatura temperatura;
    Luminocidad luz;

  public :
    void llamado() {
      rojo.inicializacionLed(10);
      amarillo.inicializacionLed(9);
      verde.inicializacionLed(8);
      luz.inicializarSensor();
    }

    void encender () {
      rojo.encenderLed(10);
      amarillo.encenderLed(9);
      verde.encenderLed(8);
    }

    unsigned int lectorLuz() {
      unsigned int valorLuz = luz.lectorLuz();
      return valorLuz;
    }

    int lectorTemperatura() {
      int valorTemperatura = temperatura.valorTemperatura(3) / 20;
      return valorTemperatura;
    }


    void cafeSeco() {
      if (lectorTemperatura() > 15 && lectorTemperatura() < 35 && lectorLuz() > 15 && lectorLuz() < 30000) {
        verde.encenderLed(8);
        rojo.apagarLed(10);
        amarillo.apagarLed(9);
        Serial.print(lectorLuz());
        Serial.print(",");
        Serial.println(lectorTemperatura());
      } else {
          verde.apagarLed(8);
          rojo.encenderLed(10);
          amarillo.apagarLed(9);
          Serial.print(lectorLuz());
          Serial.print(",");
          Serial.println(lectorTemperatura());
        }



      
    }
    /**


    */


    /**
           void calcularTemperatura() {
              valor1 = temperatura.valorTemperatura(3);
              if(valor1 > 500){
                led1.encenderLed(10);
                Serial.println(valor1);
              }else{
                led1.apagarLed(10);
                Serial.println(valor1);
              }
            }


      void encenderRojo() {
      rojo.encenderLed(10);
      }

      void encenderAmarillo() {
      amarillo.encenderLed(9);
      }

      void encenderVerde() {
      verde.encenderLed(8);
      }

      void apagarRojo() {
      rojo.apagarLed(10);
      }

      void apagarAmarillo() {
      amarillo.apagarLed(9);
      }

      void apagarVerde() {
      verde.apagarLed(8);
      }
    */



};
