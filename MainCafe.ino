#include "ControladorCafe.h"

ControladorCafe control;

void setup() {
  Serial.begin(115200);
  control.llamado();
}

void loop() {
  delay(1000);

  //control.calcularTemperatura();
  /**
     control.lectorTemperatura();
    control.encenderRojo();
    delay(3000);
    control.encenderVerde();
    delay(3000);
    control.apagarRojo();
  */
control.cafeSeco();

}
