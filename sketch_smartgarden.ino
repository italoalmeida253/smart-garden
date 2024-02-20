#include <TimeLib.h>

int pinoRele = 13;
int pinoValvula = 12;
int intervaloEntreCiclos = 6;
int tempoDeIrrigação = 15;
int ciclos = 0;

void setup() {
  pinMode(pinoRele, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print('[LOG]: CICLOS RODADOS: ' + ciclos);

  if (intervaloEntreCiclos * ciclos > 24) {
    ciclos = 0;
  }

  if (hour() == (intervaloEntreCiclos * ciclos)) {
    digitalWrite(pinoRele, HIGH);
    delay(tempoDeIrrigação * 1000);
    digitalWrite(pinoRele, LOW);
    ciclos += 1;
  }
}
