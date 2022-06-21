class Led {

  private :
    int entradaDigital = 0;

  public :

    /**
       metodo para elegir las entradas digitales correspondientes de cada led
       @param la entrada digital a la que se le asociara un led
    */
    void inicializacionLed(int entradaDigital) {
      pinMode(entradaDigital, OUTPUT);
    }

    /**
       metodo para encender un led
       @param la entrada digital a la que se le enviara el valor de 1
    */
    void encenderLed(int entradaDigital) {
      digitalWrite(entradaDigital, HIGH);
    }

    /**
       metodo para apagar un led
       @param la entrada digital a la que se le enviara el valor de 0
    */
    void apagarLed(int entradaDigital) {
      digitalWrite(entradaDigital, LOW);
    }


};
