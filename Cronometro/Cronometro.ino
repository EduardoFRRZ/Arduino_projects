//BIBLIOTECAS
#include <TimerOne.h>

#define tempoContador  0    //define o tempo do contador (em segundos)

//FUNCOES
void contaTempo();
void mostraTempo();

//VARIAVEIS PUBLICAS
int hora = 0;
int minuto = 0;
int segundo = 0;
int milesimo = 0;

void setup() {
  //INICIO DO TIMER
  Timer1.initialize(1000000000);   //TIMER IRA EXECUTAR A CADA 1 MILISEGUNDO (PARAMETRO EM MICROSEGUNDOS)
  Timer1.attachInterrupt(contaTempo);
  Serial.begin(9600);
}

void loop() {
  if(segundo == 5){
    Timer1.stop();  
  }  
}

void contaTempo() {
  milesimo = milesimo + 1;
  if(milesimo >= 999) {
    milesimo = 0;
    segundo++;
  }
  if(minuto >= 59) {
    milesimo = 0;
    segundo = 0;
    minuto++;
  }
  mostraTempo();  
}

void mostraTempo() {
  Serial.print(minuto);
  Serial.print("min :");
  Serial.print(segundo);
  Serial.print("seg :");
  Serial.print(milesimo);
  Serial.println("mil");  
}

