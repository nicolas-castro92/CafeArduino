#include <BH1750.h>
#include <Wire.h>

BH1750 sensor;

class Luminocidad {

  public:

    void inicializarSensor() {
      Wire.begin();
      sensor.begin();
    }

    int lectorLuz(){
      unsigned int lux = sensor.readLightLevel();
      return lux;
    }
};
