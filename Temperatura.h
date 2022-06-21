class Temperatura {
  private :
    int temperaturaPotenciometro = 0;

  public :

    /**
       metodo que controla el valor de la temperatura
       @param recibe la entrada analoga la cual se va a leer
       @return devuelve el valor de la temperatura
    */
    int valorTemperatura (int entradaAnaloga) {
      return analogRead(entradaAnaloga);
    }


};
