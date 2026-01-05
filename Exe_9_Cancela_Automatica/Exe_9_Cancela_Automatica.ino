// AUTOR: MAKERHERO
 
//---------------- Inclui as bibliotecas do codigo ----------------
#include <Ultrasonic.h> // Inclui a biblioteca Ultrasonic para facilitar o controle do sensor de distancia
#include <Servo.h> // Inclui a biblioteca Servo para facilitar o controle do servo motor
 
//---------------- Declara as variaveis do codigo ----------------
int pinoTrigger = 12; // Declara a variavel pinoTrigger e atribui o valor 12 a ela
int pinoEcho = 13; // Declara a variavel pinoEcho e atribui o valor 13 a ela
int pinoServo = 9; // Declara a variavel pinoServo e atribui o valor 9 a ela
int distancia; // Declara a variavel distancia sem atribuir valor a ela
int distanciaAcionamento = 5; // Declara a variavel distanciaAcionamento e atribui o valor 5 a ela
 
Ultrasonic sensorUltrassonico(pinoTrigger, pinoEcho); // Declara o objeto sensorUltrassonico para utilizar as funcoes da biblioteca Ultrasonic
Servo meuServo; // Declara o objeto meuServo para utilizar as funcoes da biblioteca Servo
 
//---------------- Funcao executada uma vez na inicializacao do sistema ----------------
void setup() {
  meuServo.attach(pinoServo); // Inicializa o envio de comandos para o servo no pino 9 (valor da variavel pinoServo)
  meuServo.write(0); // Envia o comando para o servo mover para o angulo informado
}
 
//---------------- Funcao executada repetidamente enquanto o sistema estiver ligado ----------------
void loop() {
  distancia = sensorUltrassonico.read(); // Le o valor informado pelo sensor ultrassonico e atribui o valor lido a variavel distancia
 
  if (distancia <= distanciaAcionamento) { // Se a distancia for menor ou igual à distancia de acionamento, executa as instrucoes entre chaves
    delay(800); // Aguarda 800 milissegundos
    meuServo.write(120); // Envia o comando para o servo mover para o angulo informado
 
    do { // Executa as instrucoes entre chaves uma vez e depois verifica a condicao do while
      delay(200); // Aguarda 200 milissegundos
      distancia = sensorUltrassonico.read(); // Le o valor informado pelo sensor ultrassonico e atribui o valor lido a variavel distancia
    } while (distancia <= distanciaAcionamento); // Repete enquanto a condicao for verdadeira
 
    delay(3000); // Aguarda 3000 milissegundos (3 segundos)
    meuServo.write(0); // Envia o comando para o servo mover para o angulo informado
    delay(2000); // Aguarda 2000 milissegundos (2 segundos)
  }
 
  delay(200); // Aguarda 200 milissegundos
}