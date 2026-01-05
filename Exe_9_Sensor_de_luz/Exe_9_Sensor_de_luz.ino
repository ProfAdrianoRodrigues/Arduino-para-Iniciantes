// CODIGO: Sensor de luz ambiente
 
// AUTOR: MAKERHERO
 
//----------------Declara as variaveis do codigo----------------
 
int pinoLed = 10;                                     // Declara a variavel pinoLed e atribui o valor 10 a ela
 
int pinoSensorLuz = A0;                               // Declara a variavel pinoSensorLuz e atribui o valor A0 a ela
 
int valorLuz = 0;                                     // Declara a variavel valorLuz e atribui o valor 0 a ela
 
//----------------Funcao executada uma vez na inicializacao do sistema----------------
 
void setup() {
 
  pinMode(pinoLed,OUTPUT);                            // Configura a porta 10 (valor da variável pinoLed) como saida
 
}
 
//----------------Funcao executada repetidamente enquanto o sistema estiver ligado----------------
 
void loop() {
 
  valorLuz = analogRead(pinoSensorLuz);               // Lê o valor do sensor de luminosidade (de 0 a 1023) e atribui o valor lido a variavel valorLuz
 
  if(valorLuz<750) {                                  // Se o valor da variavel valorLuz for menor que 750, executa as instrucoes entre chaves
 
    digitalWrite(pinoLed,HIGH);                       // Acende o LED
 
  } else {                                            // Caso contrario (valorLuz maior que 750), executa as instrucoes entre chaves
 
    digitalWrite(pinoLed,LOW);                        // Apaga o LED
 
  }
 
  delay(10);                                          // Aguarda 10 milissegundos
 
}